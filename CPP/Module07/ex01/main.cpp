/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:34:04 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/11 18:55:37 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	print(std::string &s)
{
	std::cout << "This element contains: " << s << std::endl;
}

void	addTwo(int i)
{
	i += 2;
	std::cout << "Added 2 to this number: " << i << std::endl;
}

void	showAscii(char &c)
{
	std::cout << "Ascii number is: " << (int)c << std::endl;
}


int	main()
{
	std::string	word[3] = {"hello", "why", "bye"};
	int number[6] = {0, 1, 2, 3, 4, 5};
	char	letter[2] = {'y', '!'};

	::iter(number, 6, addTwo);
	std::cout << std::endl;
	::iter(letter, 2, showAscii);
	std::cout << std::endl;
	::iter(word, 3, print);
	return 0;
}