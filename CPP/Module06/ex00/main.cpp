/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:34:04 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/23 17:54:59 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(void)
{
	try {
	std::string	str = "0";
	ScalarConverter::convertType(str);
	}
	catch(std::exception &e){
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	//need to catch input exceptions

	return 0;
}