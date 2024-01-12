/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:57:00 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/12 17:54:57 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define MSG 1
#define INFO_MSG(msg) if (MSG) { std::cout << msg << std::endl; }

class ClapTrap
{
public:
	ClapTrap( void );
	ClapTrap( std::string name);
	ClapTrap( const ClapTrap &c);
	ClapTrap	&operator = (const ClapTrap &c);
	~ClapTrap( void );

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

};

#endif