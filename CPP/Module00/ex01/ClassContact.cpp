/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:40:08 by ckarl             #+#    #+#             */
/*   Updated: 2023/09/21 19:40:18 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

Contact::Contact( void ) {

	std::cout << "constructing" << std::endl;
	return ;
}

Contact::~Contact( void ) {

	std::cout << "destructing" << std::endl;
	return ;
}
