/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:40:12 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/17 16:35:04 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

#include <iostream>
#include <string>
#include <exception>
#include <ostream>
#include <cstdlib>
#include "AForm.hpp"
/*
	Required grades: sign 25, exec 5 Informs that <target> has been pardoned
	by Zaphod Beeblebrox.
*/

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &c);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &c);
	~PresidentialPardonForm(void);

	void	execute(Bureaucrat const &horst) const;

protected:
	std::string	_target;
};

#endif

