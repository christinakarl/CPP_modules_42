/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:04:50 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/10 17:17:13 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <string>
#include <cmath>

class Point {
public:
	Point( void );
	Point( const float x, const float y );
	Point( const Point &p );
	Point &operator = ( const Point &p );
	~Point( void );

private:
	const float	_x;
	const float	_y;
};

#endif