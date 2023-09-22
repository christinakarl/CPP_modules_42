/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:38:34 by ckarl             #+#    #+#             */
/*   Updated: 2023/09/22 18:19:05 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassPhonebook.hpp"

int	main()
{
	Contact	person1;

	// std::cout << person1.getValue(0) << std::endl;
	person1.assignValue("helmut", 0);
	person1.assignValue("schmitt", 1);
	person1.index = 0;

	
	std::cout << person1.getValue(0) + person1.getValue(1) << person1.index << std::endl;

	return 0;

}
