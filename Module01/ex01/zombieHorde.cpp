/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:58:13 by ckarl             #+#    #+#             */
/*   Updated: 2023/12/13 15:56:28 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return NULL;
	Zombie	*zHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zHorde[i].setName( name );
	}
	return (zHorde);
}
