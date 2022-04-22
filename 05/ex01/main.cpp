/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:12:03 by agirona           #+#    #+#             */
/*   Updated: 2022/04/22 22:31:23 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	std::cout << "||  TEST 1  ||" << std::endl << std::endl;;
	try 
	{
		Bureaucrat	antoine("Antoine", 1);
		Form	test("test", 1, 1);
		std::cout << test;
		test.beSigned(antoine);
		std::cout << test;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "||  TEST 2  ||" << std::endl << std::endl;
	try
	{
		Bureaucrat	antoine("Antoine", 2);
		Form	test("test", 1, 1);
		antoine.signForm(test); //too low
		antoine.upgrade();
		antoine.signForm(test); //sucess
		antoine.signForm(test); //already signed
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
