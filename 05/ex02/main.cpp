/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:12:03 by agirona           #+#    #+#             */
/*   Updated: 2022/04/24 19:42:41 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	std::cout << "||  TEST 1 TREE  ||" << std::endl << std::endl;	
	try
	{
		ShrubberyCreationForm	test("Garden");
		Bureaucrat	antoine("Antoine", 136);
		antoine.signForm(test);
		test.execute(antoine);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "||  TEST 2 ROBOTOMY  ||" << std::endl << std::endl;	
	try
	{
		RobotomyRequestForm	test("Charle");
		Bureaucrat	patrick("Patrick", 45);
		patrick.signForm(test);
		test.execute(patrick);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "||  TEST 2 PARDON  ||" << std::endl << std::endl;	
	try
	{
		PresidentialPardonForm	test("Joe Dalton");
		Bureaucrat	willfried("Willfried", 6);
		willfried.signForm(test);
		willfried.executeForm(test);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
