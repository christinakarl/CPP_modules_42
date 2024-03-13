/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:39:59 by ckarl             #+#    #+#             */
/*   Updated: 2024/02/03 15:37:07 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Serializer_HPP
# define Serializer_HPP

#include <iostream>
#include <string>
#include <cstdint>
#include "data.hpp"

class Serializer
{
public:
	~Serializer(void);
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);

private:
	Serializer(void);
	Serializer(std::string name);
	Serializer(const Serializer &c);
	Serializer &operator=(const Serializer &c);
};

#endif
