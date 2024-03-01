/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:12:27 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/01 12:18:22 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
# define Animal_HPP

#include <iostream>
#include <string>

/*
-Pure virtual function (implementation must be provided in derived class):
	virtual void pureVirtualFunction() const = 0;
-Abstract class cannot be instantiated on its own
*/

class Animal
{
public:
	Animal(void);
	Animal(std::string name);
	Animal(const Animal &c);
	Animal &operator=(const Animal &c);
	virtual ~Animal(void);

	virtual void		makeSound(void) const = 0;
	virtual std::string	getType(void) const;

protected:
	std::string	_type;
};

#endif

