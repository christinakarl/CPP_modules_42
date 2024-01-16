/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:10:01 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/16 12:37:47 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int	main(void)
{
	{
		Animal**	animalArray = new Animal*[100];
		if (animalArray == nullptr)
			throw std::bad_alloc();

		for (size_t i = 0; i < 100; i++)
		{
			if (i < 50)
				animalArray[i] = new Cat();
			else
				animalArray[i] = new Dog();
		}

		//free memory
		for (size_t i = 0; i < 100; i++)
			delete animalArray[i];
		delete[] animalArray;
	}
	// {
	// 	Cat	fluffy;
	// 	Cat	sweety(fluffy);

	// 	std::cout << std::endl;
	// 	fluffy.setIdea("I'm the original cat");
	// 	std::cout << fluffy.getIdea(0) << std::endl;
	// 	std::cout << sweety.getIdea(0) << std::endl;
	// }

	return 0;
}
