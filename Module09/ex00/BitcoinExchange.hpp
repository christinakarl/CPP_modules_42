/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:47:33 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/20 20:37:58 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BitcoinExchange_HPP
# define BitcoinExchange_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include <map>
#include <vector>
#include <cstdlib>
#include <limits>
#include <algorithm>


class BitcoinExchange
{
public:
	BitcoinExchange();
	BitcoinExchange(std::string dataBase);
	BitcoinExchange(const BitcoinExchange &c);
	BitcoinExchange &operator = (const BitcoinExchange &c);
	~BitcoinExchange();

	//valid date?
	bool	validDate(std::string date);
	//valid value?
	bool	validValue(std::string value);
	void	getPrice(std::string inputName);
	float	multiply(std::string key, float value);

private:
	std::map<std::string, float>	_dataBase;
	std::vector<std::string>		_output;

};

std::ostream& operator << (std::ostream& os, std::vector<std::string> &obj);

#endif

