/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:37:14 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/11 15:08:21 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {

public:
	Fixed( void );
	~Fixed( void );
	Fixed( const Fixed &f );
	Fixed( const int );
	Fixed( const float );
	Fixed &operator = (const Fixed &f );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:
	int					_fixPointVal;
	static const int	_fractBits = 8;

};

std::ostream& operator<<(std::ostream& os, const Fixed &obj);


#endif