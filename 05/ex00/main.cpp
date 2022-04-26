/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:12:03 by agirona           #+#    #+#             */
/*   Updated: 2022/04/26 11:07:33 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat	paul("Paul", 150);
	Bureaucrat	antoine("Antoine", 1);

	std::cout << std::endl << "||  '<<' SURCHARGE  ||" << std::endl << std::endl;
	std::cout << paul;
	std::cout << antoine;

	std::cout << std::endl << "||  VALID UPGRADE/DOWNGRADE  ||" << std::endl << std::endl;
	try
	{
		paul.upgrade();
		std::cout << paul;
		antoine.downgrade();
		std::cout << antoine;
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}

	std::cout << std::endl << "||  INVALID UPGRADE/DOWNGRADE  ||" << std::endl << std::endl;
	try
	{
		Bureaucrat	lennon("Lennon", 160);
		Bureaucrat	Heric("Heric", -10);
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}
}
