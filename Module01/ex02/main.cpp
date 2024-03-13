/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:34:41 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/04 15:18:42 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

/*
	reference is not a copy or a pointer but the reference itself
	needs to be initialized upon declaration
	cannot be changed to another reference
	cannot refer to a nullptr or to other reference
	no arithmetic ops possible
	>> use references when you can, pointers when you must
*/

int	main( void )
{
	std::string	sentence = "HI THIS IS BRAIN";
	std::string&	stringREF = sentence;
	std::string*	stringPTR = &sentence;

	std::cout << "\033[0;35mMemory address of string: \033[0m" << &sentence << std::endl;
	std::cout << "\033[0;35mMemory address of stringREF: \033[0m" << &stringREF << std::endl;
	std::cout << "\033[0;35mMemory address of stringPTR: \033[0m" << &stringPTR << std::endl;

	std::cout << "\033[0;35m\nValue of string: \033[0m" << sentence << std::endl;
	std::cout << "\033[0;35mValue referenced by stringREF: \033[0m" << stringREF << std::endl;
	std::cout << "\033[0;35mValue pointed to by stringPTR: \033[0m" << *stringPTR << std::endl;

	return 0;
}