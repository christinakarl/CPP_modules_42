/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:34:04 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/19 20:23:21 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main()
{
	std::cout << "copy assignment operator" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int> copy(mstack);
		MutantStack<int>::iterator it = copy.begin();
		MutantStack<int>::iterator ite = copy.end();
		while (it != ite) {
			std::cout << "copy: " << *it << std::endl;
			++it;
		}
	}
	std::cout << std::endl << "copy constructor" << std::endl;
	{
		MutantStack<int> mstack;
		MutantStack<int> copy2;

		mstack.push(222);
		mstack.push(0);
		mstack.push(-6);
		copy2 = mstack;
		MutantStack<int>::iterator it = copy2.begin();
		MutantStack<int>::iterator ite = copy2.end();
		while (it != ite) {
			std::cout << "copy2: " << *it << std::endl;
			++it;
		}
	}
	std::cout << std::endl << "main from the subject" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << "stack top: " << mstack.top() << std::endl;
		std::cout << "stack size: " << mstack.size() << std::endl;
		mstack.pop();
		std::cout << "stack size: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << "stack element: " << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl << "same tests with different container" << std::endl;
	{
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << "list top: " << mstack.back() << std::endl;
		std::cout << "list size: " << mstack.size() << std::endl;
		mstack.pop_back();
		std::cout << "list size: " << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << "list element: " << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	return 0;
}