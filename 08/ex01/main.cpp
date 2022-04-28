/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:43:09 by agirona           #+#    #+#             */
/*   Updated: 2022/04/28 15:44:24 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

int		gen(const unsigned int limit)
{
	return (rand() % limit);
}

int		main(void)
{
	Span	test(10);

	std::cout << "||  CORRECT ADD NUMBER RANGE  ||" << std::endl;
	srand(time(NULL));
	test.rangeAddNumber(9, gen, 10);

	std::cout << std::endl << "||  CORRECT ADD NUMBER  ||" << std::endl;
	test.addNumber(4);

	std::cout << std::endl << "||  INCORRECT ADD NUMBER  ||" << std::endl;
	try
	{
		test.addNumber(4);
	}
	catch (std::exception(&e))
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}

	std::cout << std::endl << "||  INCORRECT ADD NUMBER RANGE  ||" << std::endl;
	try
	{
		test.rangeAddNumber(1, gen, 10);
	}
	catch (std::exception(&e))
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}

	std::cout << std::endl << "||  SHORTEST && LONGEST SPAN  ||" << std::endl;
	std::cout << "Max = " << *std::max_element(test.begin(), test.end()) << std::endl;
	std::cout << "Min = " << *std::min_element(test.begin(), test.end()) << std::endl;
	std::cout << "Shortest = " << test.shortestSpan() << std::endl;
	std::cout << "Longest = " << test.longestSpan() << std::endl;

	std::cout << std::endl << "||  1 ELEMENT SPAN  ||" << std::endl;
	try
	{
		Span	one(1);

		one.rangeAddNumber(1, gen, 10);
		std::cout << "Longest = " << one.longestSpan() << std::endl;
	}
	catch (std::exception(&e))
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}

	std::cout << std::endl << "||  EMPTY SPAN  ||" << std::endl;
	try
	{
		Span	empty(0);

		std::cout << "Shortest = " << empty.shortestSpan() << std::endl;
	}
	catch (std::exception(&e))
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}

	return (0);
}
