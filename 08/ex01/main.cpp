/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:43:09 by agirona           #+#    #+#             */
/*   Updated: 2022/04/27 21:52:17 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

int		main(void)
{
	Span	test(4);
	Span::iterator	i;
	Span::iterator	e;

	/*test.addNumber(4);
	test.addNumber(10);
	test.addNumber(6);
	test.addNumber(8);
	test.addNumber(1);
	test.addNumber(9);
	test.addNumber(2);
	test.addNumber(5);
	test.addNumber(7);
	test.addNumber(3);*/


	test.addNumber(7);
	test.addNumber(6);
	test.addNumber(0);
	test.addNumber(10);

	Span	copy(test);
	i = test.begin();
	e = test.end();
	std::sort(copy.begin(), copy.end());
	std::cout << " Original : " << std::endl;
	while (i != e)
	{
		std::cout << *i << std::endl;
		i++;
	}
	
	i = copy.begin();
	e = copy.end();
	std::cout << " Sort : " << std::endl;
	while (i != e)
	{
		std::cout << *i << std::endl;
		i++;
	}
	std::cout << "shortest = " << copy.shortestSpan() << std::endl;
	std::cout << "longest = " << copy.longestSpan() << std::endl;
	return (0);
}
