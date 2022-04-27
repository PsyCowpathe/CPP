/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:42:06 by agirona           #+#    #+#             */
/*   Updated: 2022/04/27 19:19:23 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <iostream>

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage : ./easyfind <number>" << std::endl;
		return (0);
	}
	std::list<int>				lst;
	std::list<int>::iterator	it;

	lst.push_back(5);
	lst.push_back(8);
	lst.push_back(10);
	lst.push_back(-42);;
	lst.push_back(-1);
	lst.push_back(1);
	lst.push_back(2);

	it = easyfind(lst, atoi(argv[1]));
	if (it != lst.end())
		std::cout << "Value was find." << std::endl;
	else
		std::cout << "Value was not find." << std::endl;
}
