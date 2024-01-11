/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:37:14 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/11 15:07:41 by ckarl            ###   ########.fr       */
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
	Fixed &operator = ( const Fixed &f );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	bool	operator < ( const Fixed &comp ) const;
	bool	operator > ( const Fixed &comp ) const;
	bool	operator <= ( const Fixed &comp ) const;
	bool	operator >= ( const Fixed &comp ) const;
	bool	operator == ( const Fixed &comp ) const;
	bool	operator != ( const Fixed &comp ) const;

	Fixed	operator + ( const Fixed &arit ) const;
	Fixed	operator - ( const Fixed &arit ) const;
	Fixed	operator * ( const Fixed &arit ) const;
	Fixed	operator / ( const Fixed &arit ) const;

	Fixed	&operator ++ ( void );
	Fixed	operator ++ ( int );
	Fixed	&operator -- ( void );
	Fixed	operator -- ( int );

	static Fixed		&min( Fixed &a, Fixed &b );
	static const Fixed	&min( const Fixed &a, const Fixed &b );
	static Fixed		&max( Fixed &a, Fixed &b );
	static const Fixed	&max( const Fixed &a, const Fixed &b );

private:
	int					_fixPointVal;
	static const int	_fractBits = 8;

};

std::ostream	&operator << ( std::ostream& os, const Fixed &obj );

#endif