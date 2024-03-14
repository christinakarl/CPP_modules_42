/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:10:04 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/14 12:10:47 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Easyfind_HPP
# define Easyfind_HPP

#include <iostream>
#include <string>

class	NotFoundError : public std::exception
{
public:
	virtual const char *what(void) const throw()
	{
		return "Instance could not be found in the container";
	};
};

template <typename T>
void	easyfind(T &cont, int i)
{
	typename T::iterator	index = std::find(cont.begin(), cont.end(), i);
	if (index != cont.end())
		std::cout << "Instance was found" << std::endl;
	else
		throw NotFoundError();
}


#endif

