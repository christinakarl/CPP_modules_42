/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:18:56 by ckarl             #+#    #+#             */
/*   Updated: 2024/02/05 17:28:06 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Classes_HPP
# define Classes_HPP

#include <iostream>
#include <string>

class Base
{
public:
	virtual ~Base(void);
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif

