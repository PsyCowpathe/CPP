/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:12:03 by agirona           #+#    #+#             */
/*   Updated: 2022/04/26 11:18:19 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	std::cout << "||  VALID FORM CREATION + << SURCHARGE  ||" << std::endl << std::endl;;
	try 
	{
		Form	test("test", 1, 1);
		Form	pouet("pouet", 150, 150);
		std::cout << test;
		std::cout << pouet;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "||  BESIGNED  ||" << std::endl << std::endl;;
	try 
	{
		Bureaucrat	antoine("Antoine", 75);
		Form	test("test", 1, 1);
		Form	pouet("pouet", 150, 150);

		std::cout << pouet;
		pouet.beSigned(antoine);
		std::cout << pouet;

		std::cout << test;
		test.beSigned(antoine);//EXCEPTION
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}

	std::cout << std::endl << "||  SIGNFORM  ||" << std::endl << std::endl;;

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
