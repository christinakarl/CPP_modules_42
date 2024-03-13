/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:09:36 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/11 14:35:18 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

/*
If you have three points a=(xa,ya), b=(xb,yb), and c=(xc,yc),
and a test point point=(xp,yp), then the cross product calculations in the code are as follows:

cp1=(xp−xb)(ya−yb)−(xa−xb)(yp−yb)
cp2=(xp−xc)(yb−yc)−(xb−xc)(yp−yc)
cp3=(xp−xa)(yc−ya)−(xc−xa)(yp−ya)

if any of these is negative, it means that the point is not withing the triangle
(must be 0 or > 0s) >> not sure if this is correct

The logical OR (||) operator is used to combine these three conditions.
The result (neg) will be true if at least one of the conditions is true, and it
will be false only if all three conditions are false.

If both neg and pos are true, it means the point is outside the triangle.
If either neg or pos is false, it means the point is inside the triangle.
*/
bool	bsp( Point const &a, Point const &b, Point const &c, Point const &point)
{
	float cp1 = (point.getX() - b.getX()) * (a.getY() - b.getY()) - \
				(a.getX() - b.getX()) * (point.getY() - b.getY());
	float cp2 = (point.getX() - c.getX()) * (b.getY() - c.getY()) - \
				(b.getX() - c.getX()) * (point.getY() - c.getY());
	float cp3 = (point.getX() - a.getX()) * (c.getY() - a.getY()) - \
				(c.getX() - a.getX()) * (point.getY() - a.getY());

	bool neg = cp1 < 0 || cp2 < 0 || cp3 < 0;
	bool pos = cp1 > 0  || cp2 > 0 || cp3 > 0;

	return !(neg && pos);
}
