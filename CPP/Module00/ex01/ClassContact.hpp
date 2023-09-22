/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:40:19 by ckarl             #+#    #+#             */
/*   Updated: 2023/09/22 17:45:48 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact {

public:

	int			index;

	Contact( void );
	~Contact( void );
	std::string	getValue( int d );
	void		assignValue( std::string value, int d );

private:
	std::string	_0FirstName;
	std::string	_1LastName;
	std::string	_2NickName;
	std::string	_3PhoneNumber;
	std::string	_4DarkestSecret;
};



#endif