/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:15:45 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/09 13:09:36 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl {

public:
	Harl( void );
	~Harl( void );

	void	complain( const std::string level );

private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
};


#endif