/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:12:09 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/16 12:36:04 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(std::string name);
	Dog(const Dog &c);
	Dog &operator=(const Dog &c);
	virtual ~Dog(void);

	virtual void	makeSound(void) const;
	void			setIdea(std::string& idea);
	std::string		getIdea(unsigned int i);

protected:
	Brain*	_dogBrain;
};

#endif

