/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:35:03 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/08 15:56:40 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <fstream>
#include <iostream>
#include <string>

int	main( int argc, char *argv[] )
{
	std::ifstream	readFile;
	std::ofstream	replaceFile;
	//check for parameter errors
	if (argc != 4)
	{
		std::cout << "Please provide 3 parameters to this program: filename string1 string2" << std::endl;
		return 0 ;
	}
	//open input file, check for errors
	readFile.open(argv[1], std::fstream::in);
	if (readFile.fail())
	{
		std::cout << "Could not open input file" << std::endl;
		return 0 ;
	}
	//name and create replaceFile
	std::string	replaceName(argv[1]);
	replaceName += ".replace";
	replaceFile.open(replaceName, std::fstream::out);
	if (replaceFile.fail())
	{
		std::cout << "Could not create replace file" << std::endl;
		return 0 ;
	}
	//put argvs into strings
	std::string	str1(argv[2]);
	std::string	str2(argv[3]);
	//copy text line by line and replace str1 with str2
	std::string	line;
	size_t		pos = 0;
	while (std::getline(readFile, line))
	{
		do { pos = line.find(str1);
			if (pos == std::string::npos)
				replaceFile << line;
			else
			{
				replaceFile << line.substr(0, pos);
				replaceFile << str2;
				line = line.substr(pos + str1.length());
			}
		} while (pos != std::string::npos);
		if (!readFile.eof())
			replaceFile << "\n";
	}
	replaceFile.close();
	readFile.close();
	return 0 ;
}
