/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:47:21 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/20 20:59:03 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &c) { *this = c; }
BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator = (const BitcoinExchange &c)
{
	if (this != &c)
	{
		_dataBase = c._dataBase;
		_output = c._output;
	}
	return *this;
}

BitcoinExchange::BitcoinExchange(std::string dataBase)
{
	//open file (check for empty or non-readable)
	std::ifstream	dataFile;

	dataFile.open(dataBase, std::fstream::in);
	if (dataFile.fail() || dataFile.peek() == EOF)
		throw std::runtime_error("Could not open database file");

	std::string line;
	while (std::getline(dataFile, line))
	{
		//treat each line: separate by comma and put into key & value
		int		pos;
		std::string	key;
		float	value;

		pos = line.find(",");
		if (pos == (int)std::string::npos)
			throw std::runtime_error("Database file is missing a comma");
		key = line.substr(0, pos);

		std::istringstream ss(line.substr(pos + 1));
		ss >> std::setprecision(2) >> std::fixed >> value;
		if (ss.fail() == true)
			throw std::runtime_error("Could not convert value in database file");
		//check if both valid
		if (!validDate(key) || value < 0)
			throw std::runtime_error("Invalid date or value format in database file");
		//insert into map
		_dataBase.insert(std::make_pair(key, value));
	}
}

//extraction of characters will stop automatically when char is not compatible with output >> type
bool	BitcoinExchange::validDate(std::string date)
{
	std::istringstream wholeData(date);
	int y = 0; char c = 0;
	wholeData >> y >> c;
	if ((y < 1900 || y > 2500) || (c != '-'))
		return false;
	int m = 0; c = 0;
	wholeData >> m >> c;
	if ((m < 1 || m > 12) || (c != '-'))
		return false;
	int d = 0; c = 0;
	wholeData >> d;
	if ((d < 1 || d > 31) || (d == 31 && (m == 2 || m == 4 || m == 6 || m == 9 || m == 11)) \
		|| (m == 2 && (d > 29 || (d == 29 && (y%100)%4 != 0))))
		return false;
	return true;
}

bool	BitcoinExchange::validValue(std::string value)
{
	//test for characters
	std::istringstream ss(value);
	char	c;

	ss >> c;
	if (c == '-')
		ss >> c;
	while (ss)
	{
		if ((c > '9' || c < '0') && c != '.')
			return false;
		ss >> c;
	}

	return true;
}

void BitcoinExchange::getPrice(std::string inputName)
{
	std::ifstream	inputFile;

	inputFile.open(inputName, std::fstream::in);
	if (inputFile.fail() || inputFile.peek() == EOF)
		throw std::runtime_error("Could not open input file or input file is empty");

	std::string line;
	while (std::getline(inputFile, line))
	{
		int pos; std::string key; float	value; std::ostringstream os;

		pos = line.find(" | ");
		if (pos == (int)std::string::npos) {
			_output.push_back("Error: Wrong format"); continue;
		}
		else {
			key = line.substr(0, pos);
			if (!validDate(key)) {
				_output.push_back("Error: " + key + " is an invalid date"); continue;
			}
			if (!validValue(line.substr(pos + 3))) {
				_output.push_back("Error: " + line.substr(pos + 3) + " is an invalid number"); continue;
			}
			std::istringstream ss(line.substr(pos + 3));
			ss >> std::setprecision(2) >> std::fixed >> value;
			if (ss.fail() == true || value < 0 || value > 1000){
				_output.push_back("Error: " + line.substr(pos + 3) + " is negative or too big"); continue;
			}
			os << key << " | " << value << " => " << std::fixed << std::setprecision(2) << multiply(key, value);
			_output.push_back(os.str());
		}
	}
	std::cout << _output;
}

float	BitcoinExchange::multiply(std::string key, float value)
{
	std::map<std::string, float>::iterator it = _dataBase.begin();

	while (it != _dataBase.end() && key >= it->first)
		it++;
	if (key == it->first || it == _dataBase.end() || it == _dataBase.begin())
		return it->second * value;
	it--;
	return it->second * value;
}


std::ostream& operator << (std::ostream& os, std::vector<std::string> &obj)
{
	for (std::vector<std::string>::iterator it = obj.begin(); it != obj.end(); it++)
		os << *it << std::endl;
	return os;
}

