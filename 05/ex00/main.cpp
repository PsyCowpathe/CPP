/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:12:03 by agirona           #+#    #+#             */
/*   Updated: 2022/04/22 20:56:47 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat	paul("Paul", 150);
	Bureaucrat	antoine("Antoine", 1);

	std::cout << paul;
	std::cout << antoine;
	try
	{
		paul.upgrade();
		std::cout << paul;
		antoine.downgrade();
		std::cout << antoine;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
