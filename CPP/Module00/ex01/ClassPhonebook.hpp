/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:40:39 by ckarl             #+#    #+#             */
/*   Updated: 2023/11/15 22:55:45 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_PHONEBOOK_HPP
# define CLASS_PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "ClassContact.hpp"

class Phonebook {

public:

	int		index;
	Phonebook( void );
	~Phonebook( void );

	void	addCtc( Contact ctc );
	void	getctc_info( int ctc_index );
	int	display_book( void );

private:
	Contact	_Book[8];
};


#endif