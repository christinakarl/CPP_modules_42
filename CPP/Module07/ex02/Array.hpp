/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:12:29 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/11 19:13:29 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
# define Array_HPP

#include <iostream>
#include <string>

template <class T>
class Array
{
public:
	Array(void);
	Array(const Array &c);
	Array &operator=(const Array &c);
	~Array(void);

protected:

};

#endif

