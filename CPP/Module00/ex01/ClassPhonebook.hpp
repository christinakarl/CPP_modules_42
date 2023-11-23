/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:40:39 by ckarl             #+#    #+#             */
/*   Updated: 2023/11/23 13:48:12 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_PHONEBOOK_HPP
# define CLASS_PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "ClassContact.hpp"

class Phonebook {

public:

	Phonebook( void );
	~Phonebook( void );

	void	addCtc( Contact ctc );
	int		getctc_info( int ctc_index );
	int		display_book( void );

private:
	int		index;
	Contact	_Book[8];
};


#endif