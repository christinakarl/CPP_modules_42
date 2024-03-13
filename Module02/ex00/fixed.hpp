/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:37:14 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/10 17:09:33 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {

public:
	Fixed( void );
	~Fixed( void );
	Fixed( const Fixed &f );
	Fixed &operator = (const Fixed &f );

	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int					_fixPointVal;
	static const int	_fractBits = 8;

};

#endif