/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:04:42 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/11 14:33:25 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

Point::Point( void ) : _x(0), _y(0)
{
	// std::cout << "Default 'Point' class constructor called" << std::endl;
	INFO_MSG("Default 'Point' class constructor called");
}

Point::Point( const float x, const float y ) : _x(x), _y(y)
{
	// std::cout << "'Point' class constructor called, x and y attributed" << std::endl;
	INFO_MSG("'Point' class constructor called, x and y attributed");
}

Point::~Point( void )
{
	// std::cout << "'Point' class destructor called" << std::endl;
	INFO_MSG("'Point' class destructor called");

}

Point::Point( const Point &p ) : _x(p._x), _y(p._x)
{
	// std::cout << "'Point' class copy constructor called" << std::endl;
	INFO_MSG("'Point' class copy constructor called");
}

Point	&Point::operator = ( const Point &p )
{
	// std::cout << "'Point' class copy assignment operator called" << std::endl;
	INFO_MSG("'Point' class copy assignment operator called");
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