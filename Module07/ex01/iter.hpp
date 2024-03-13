#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

/*
• The first parameter is the address of an array.
• The second one is the length of the array.
• The third one is a function that will be call on every element of the array.
*/

template <typename T, typename F> void	iter(T add[], size_t len, F f)
{
	for(int i = 0; i < len; ++i)
	{
		f(add[i]);
	}
}

#endif