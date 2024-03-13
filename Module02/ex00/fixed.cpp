/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:42:38 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/10 10:46:07 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed( void )
{
	this->_fixPointVal = 0;
	std::cout << "Fixed class constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Fixed class destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &f )
{
	std::cout << "Fixed class copy constructor called" << std::endl;
	if (this != &f)
	{
		this->_fixPointVal = f.getRawBits();
	}
}

//necessary to de-reference pointer to allow chained assignments (obj1 = ob2 = ob3)
Fixed &Fixed::operator = (const Fixed &f )
{
	if (this != &f)
	{
		this->_fixPointVal = f.getRawBits();
	}
	return *this ;
}

int Fixed::getRawBits( void ) const
{
	return this->_fixPointVal;
}

/* [ transform int into fixed point nr: (int << fractionalBits) + fractionalPart ]
Left-shifting the integer part by the number of fractional bits effectively
multiplies the integer part by 2^fractionalBits
Example: raw = 9
	9 * 2^8 + 0
*/
void Fixed::setRawBits( int const raw )
{
	this->_fixPointVal = (raw << this->_fractBits) + 0;
}
