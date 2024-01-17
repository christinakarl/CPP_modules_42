/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:39:31 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/17 17:52:02 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

#include <iostream>
#include <string>
#include <exception>
#include <ostream>
#include <cstdlib>
#include "AForm.hpp"
/*
Required grades: sign 72, exec 45
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed.
*/

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &c);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &c);
	~RobotomyRequestForm(void);

	void	execute(Bureaucrat const &horst) const;

protected:
	std::string	_target;
};

#endif

