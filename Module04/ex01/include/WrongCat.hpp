/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:46:31 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/15 21:38:09 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(std::string name);
	WrongCat(const WrongCat &c);
	WrongCat &operator=(const WrongCat &c);
	virtual ~WrongCat(void);

	virtual void	makeSound(void) const;
};

#endif

