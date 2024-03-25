/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <ckarl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:57:31 by ckarl             #+#    #+#             */
/*   Updated: 2024/03/25 09:57:41 by ckarl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// // Function to parse input string into a deque of integers
// std::deque<int> parseInput(const std::string& input) {
// 	std::deque<int> numbers;
// 	std::istringstream iss(input);
// 	int num;
// 	while (iss >> num)
// 		numbers.push_back(num);
// 	return numbers;
// }

// // Merge-insertion sort function
// std::deque<int> mergeInsertionSort(std::deque<int>& deq) {
// 	if (deq.size() <= 1)
// 		return deq;

// 	// Splitting the array into two halves
// 	size_t middle = deq.size() / 2;
// 	std::deque<int> left(deq.begin(), deq.begin() + middle);
// 	std::deque<int> right(deq.begin() + middle, deq.end());

// 	// Recursively sort each half
// 	left = mergeInsertionSort(left);
// 	right = mergeInsertionSort(right);

// 	// Merge the sorted halves
// 	std::deque<int> result;
// 	std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(result));
// 	return result;
// }

int main(int argc, char* argv[])
{
	if (argc <= 2) {
		std::cerr << "Error: Please use a sequence of positive integers as arguments" << std::endl;
		return 1;
	}

	try {
		PmergeMe	sequence;

		while (++argv && *argv)
			sequence.add(*argv);

		sequence.sort_all();
		// std::string input = argv[1];
		// std::deque<int> numbers = parseInput(input);

		// if (numbers.empty()) {
		// 	std::cerr << "Error: Empty input sequence.\n";
		// 	return 1;
		// }

		// // Sorting the sequence using merge-insertion sort
		// numbers = mergeInsertionSort(numbers);

		// // Output the sorted sequence
		// for (std::deque<int>::iterator it = numbers.begin(); it < numbers.end(); it++) {
		// 	std::cout << *it << " ";
		// }
		// std::cout << std::endl;

		return 0;
	}
	catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}
}
