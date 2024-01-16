/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:12:27 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/15 21:35:38 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
# define Animal_HPP

#include <iostream>
#include <string>

/*
Runtime Polymorphism (Dynamic Polymorphism):
It allows a base class pointer or reference to point to objects of its derived
classes, and the correct function to be called is determined at runtime.
Requires the use of virtual functions in the base class, which can be overridden
by derived classes.

Compiletime Polymorphism (Statis Polymorphism):
Function and operator overloading
*/


class Animal
{
public:
	Animal(void);
	Animal(std::string name);
	Animal(const Animal &c);
	Animal &operator=(const Animal &c);
	virtual ~Animal(void);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

protected:
	std::string	_type;
};

#endif

