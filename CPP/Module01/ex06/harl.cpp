/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:15:27 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/08 21:18:12 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

Harl::Harl( void )
{
	return ;
}

Harl::~Harl( void )
{
	return ;
}

void	Harl::debug( void )
{
	std::cout << "\033[1;34mI love having extra bacon for my 7XL-double-cheese-\ntriple-pickle-special-ketchup burger. I really do!\033[0m❤️" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "\033[1;34mI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t\nbe asking for more!💔\033[0m" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "\033[1;34mI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working \nhere since last month.👉\033[0m" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "\033[1;34mThis is unacceptable! I want to speak to the manager now.💣\033[0m" << std::endl;
}

void	Harl::complainForever( std::string level )
{
	std::string	msg[4] = {"debug", "info", "warning", "error"};
	void (Harl::*func_ptr[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	i = -1;

	while (++i < 4)
	{
		if (level == msg[i])
			break ;
	}
	switch(i)
	{
		case 0:
			std::cout << "[ debug ]" << std::endl;
			(this->*func_ptr[0])();
		case 1:
			std::cout << "[ info ]" << std::endl;
			(this->*func_ptr[1])();
		case 2:
			std::cout << "[ warning ]" << std::endl;
			(this->*func_ptr[2])();
		case 3:
			std::cout << "[ error ]" << std::endl;
			(this->*func_ptr[3])();
			break ;
		default:
			std::cout << "\033[0;34mHarl just loves complaining about anything and anyone\033[0m" << std::endl;
	}
}

