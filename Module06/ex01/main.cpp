/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:34:04 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/27 11:35:32 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data	d1;
	Data	*d2;

	d1.i = 15;
	uintptr_t s = Serializer::serialize(&d1);
	d2 = Serializer::deserialize(s);

	std::cout << d1.i << std::endl;
	std::cout << d2->i << std::endl;

	return 0;
}