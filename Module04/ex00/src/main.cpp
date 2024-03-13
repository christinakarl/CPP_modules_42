/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:10:01 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/15 21:50:25 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/Animal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/WrongAnimal.hpp"

int	main(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const WrongAnimal *i = new WrongCat();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;

	return 0;
}
