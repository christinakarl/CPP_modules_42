/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:14:15 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/11 14:39:11 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.hpp"

/*
We make another triangle consisting of two points of triangle,
and given point. We'll have three such areas, let's say a1, a2, a3.
Find the area of triangle, let this be 'a'.

Now if 'a == a1+a2+a3', then point lies inside the triangle, otherwise not.
*/

int	main( void )
{
	Point A(1, 0);
	Point B(1, 1);
	Point C(0, 1);
	Point m(5, 6);
	Point n(0.9, 0.7);

	std::cout << "point m lies " << (bsp(A, B, C, m) ? "\033[0;32minside of triangle\033[0m" : "\033[0;31moutside of triangle\033[0m") << std::endl;
	std::cout << "point n lies " << (bsp(A, B, C, n) ? "\033[0;32minside of triangle\033[0m" : "\033[0;31moutside of triangle\033[0m") << std::endl;

	return 0;
}
