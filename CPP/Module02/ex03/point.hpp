/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:04:50 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/11 14:28:16 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include "fixed.hpp"

class Point {
public:
	Point( void );
	Point( const float x, const float y );
	Point( const Point &p );
	Point	&operator = ( const Point &p );
	~Point( void );

	float	getX( void ) const;
	float	getY( void ) const;

private:
	Fixed const	_x;
	Fixed const	_y;
};

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point);

#endif