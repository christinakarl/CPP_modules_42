/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:40:19 by ckarl             #+#    #+#             */
/*   Updated: 2024/01/09 13:02:06 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <iomanip>

class Contact {

public:

	Contact( void );
	~Contact( void );

	int			index;

	std::string	getValue( int d );
	void		assignValue( std::string value, int d );
	void		display_ctc_short( void );
	void		display_ctc_long( void );

private:
	std::string	_0FirstName;
	std::string	_1LastName;
	std::string	_2NickName;
	std::string	_3PhoneNumber;
	std::string	_4DarkestSecret;
};



#endif