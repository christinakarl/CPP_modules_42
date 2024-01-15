/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:12:19 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/15 21:36:59 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	Cat(std::string name);
	Cat(const Cat &c);
	Cat &operator=(const Cat &c);
	virtual~Cat(void);

	virtual void	makeSound(void) const;

};

#endif

