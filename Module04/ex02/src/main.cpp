/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:10:01 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/01 12:14:15 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int	main(void)
{
	//trying to instantiate an Animal class
	// Animal	byMyself;
	Animal*	realAnimal = new Cat();
	Dog	myDog;
	Animal&	otherAnimal = myDog;
	//not possible: Animal someAnimal = Cat(), must be * or & (otherwise object slicing may occur)

	delete realAnimal;
	return 0;
}
