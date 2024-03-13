/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:04:42 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/15 13:59:14 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

Point::Point( void ) : _x(0), _y(0)
{
	std::cout << "Default 'Point' class constructor called" << std::endl;
}

Point::Point( const float x, const float y ) : _x(x), _y(y)
{
	std::cout << "'Point' class constructor called, x and y attributed" << std::endl;
}

Point::~Point( void )
{
	std::cout << "'Point' class destructor called" << std::endl;
}

Point::Point( const Point &p ) : _x(p._x), _y(p._x)
{
	std::cout << "'Point' class copy constructor called" << std::endl;
}

Point	&Point::operator = ( const Point &p )
{
	std::cout << "'Point' class copy assignment operator called" << std::endl;
	(void) p;
	return (*this);
}

float	Point::getX( void ) const
{
	return this->_x.toFloat();
}

float	Point::getY( void ) const
{
	return this->_y.toFloat();
}