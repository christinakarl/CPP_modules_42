/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:57:25 by ckarl             #+#    #+#             */
/*   Updated: 2023/09/21 13:24:58 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	- std::cout = scope operator, use cout within use of std library
	OR "using namespace std" (or just "using std::cout")
	to just write cout in the program
*/
#include <iostream>
using namespace std;

int	main(int argc, char **argv)
{
	int	d = 0;
	int	j;

	if (argc == 1)
		cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (d++ < argc - 1)
	{
		j = -1;
		while (argv[d][++j])
			argv[d][j] = toupper(argv[d][j]);
		cout<<argv[d];
	}
	cout<<endl;
	return 0;
}