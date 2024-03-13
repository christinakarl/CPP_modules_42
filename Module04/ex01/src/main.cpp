/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:10:01 by ckarl             #+#    #+#             */
/*   Updated: 2024/02/29 15:34:17 by ckarl            ###   ########.fr       */
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

		for (size_t i = 0; i < 10; i++)
		{
			if (i < 5)
				animalArray[i] = new Cat();
			else
				animalArray[i] = new Dog();
		}
		for (size_t i = 0; i < 10; i++)
			delete animalArray[i];
		delete[] animalArray;
	}
	//test ideas & shallow copies
	{
		std::cout << std::endl;
		Cat	fluffy;

		std::cout << std::endl;
		fluffy.setIdea("I'm the original cat");
		std::cout << fluffy.getIdea(0) << std::endl;

		Cat	sweety(fluffy);
		// sweety = fluffy;
		std::cout << sweety.getIdea(0) << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	basic.setIdea("dog idea");
	basic.getIdea(0);
	std::cout << std::endl;

	return 0;
}
