/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:42:38 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/10 13:52:18 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
//regular constructor
Fixed::Fixed( void )
{
	this->_fixPointVal = 0;
	std::cout << "Fixed class default constructor called" << std::endl;
}

//destructor
Fixed::~Fixed( void )
{
	std::cout << "Fixed class destructor called" << std::endl;
}

//copy constructor
Fixed::Fixed( const Fixed &f )
{
	std::cout << "Fixed class copy constructor called" << std::endl;
	if (this != &f)
	{
		this->_fixPointVal = f.getRawBits();
	}
}

//copy assignment operator
//necessary to de-reference pointer at return to allow chained assignments (obj1 = ob2 = ob3)
Fixed &Fixed::operator = (const Fixed &f )
{
	if (this != &f)
	{
		this->_fixPointVal = f.getRawBits();
	}
	std::cout << "Fixed class copy assignment operator called" << std::endl;
	return *this ;
}

//constructor converting int to fixed point
Fixed::Fixed( const int a )
{
	this->_fixPointVal = a << this->_fractBits;
	std::cout << "Fixed class int constructor called" << std::endl;
}

/*constructor converting float to fixed point
1U = literal unsigned int 1
Adding 0.5 ensures that if the fractional part of b is 0.5 or greater,
the number will be rounded up. Subtracting 0.5 ensures that if the
fractional part is less than 0.5, the number will be rounded down.*/
Fixed::Fixed( const float b )
{
	this->_fixPointVal = roundf((b * float(1U << this->_fractBits)) + (b >= 0 ? 0.5 : -0.5));
	std::cout << "Fixed class float constructor called" << std::endl;
}

//converts fixed point to float
float	Fixed::toFloat( void ) const
{
	return (this->_fixPointVal / float(1U << this->_fractBits));
}
//converts fixed point to int
int	Fixed::toInt( void ) const
{
	return (this->_fixPointVal >> this->_fractBits) ;
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

//overload of the insertion («) operator
std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}
