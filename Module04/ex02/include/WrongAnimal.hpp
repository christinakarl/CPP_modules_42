/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:46:18 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/15 21:45:31 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
public:
	WrongAnimal(void);
	WrongAnimal(std::string name);
	WrongAnimal(const WrongAnimal &c);
	WrongAnimal &operator=(const WrongAnimal &c);
	virtual ~WrongAnimal(void);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

protected:
	std::string	_type;
};

#endif

