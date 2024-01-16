/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:52:22 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/16 12:36:09 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
# define Brain_HPP

#include <iostream>
#include <string>

class Brain
{
public:
	Brain(void);
	Brain(std::string idea);
	Brain(const Brain &c);
	Brain &operator=(const Brain &c);
	virtual ~Brain(void);

	void			fillBrain(std::string& idea);
	std::string		getIdea(unsigned int i);
	unsigned int	getIndex(void);

protected:
	std::string		_ideas[100];
	unsigned int	_index;
};

#endif

