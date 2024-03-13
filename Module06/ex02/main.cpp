/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:34:04 by ckarl             #+#    #+#             */
/*   Updated: 2024/02/05 19:01:44 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"
#include <random>

//randomly instanciates A, B or C and returns the instance as a Base pointer
Base	*generate(void)
{
	srand (time(NULL));
	int random = rand() % 3;
	switch (random)
	{
		case 0:
			std::cout << "A class" << std::endl;
			return new A();
		case 1:
			std::cout << "B class" << std::endl;
			return new B();
		case 2:
			std::cout << "C class" << std::endl;
			return new C();
		default:
			return new Base();
	}
}

//prints the actual type of the object pointed to by p: "A", "B" or "C"
void identify(Base* p)
{
	A *testA = dynamic_cast<A*>(p);
	if (!testA){
		B *testB = dynamic_cast<B*>(p);
		if (!testB) {
			std::cout << "it's C" << std::endl;
		}
		else
			std::cout << "it's B" << std::endl;
	}
	else
		std::cout << "it's A" << std::endl;
}

//prints the actual type of the object pointed to by p: "A", "B" or "C"
//Using a pointer inside this function is forbidden
void identify(Base& p)
{
	try {
		A &testA = dynamic_cast<A&>(p);
	}
	catch (std::bad_cast &b){
		try {
		B &testB = dynamic_cast<B&>(p);
		}
		catch (std::bad_cast &b) {
			std::cout << "it's C" << std::endl;
			return ;
		}
		std::cout << "it's B" << std::endl;
		return ;
	}
	std::cout << "it's A" << std::endl;
}

int	main(void)
{
	Base *someClass = generate();
	Base &otherClass = *someClass;
	
	identify(someClass);
	// identify(otherClass);

	delete someClass;

	return 0;
}