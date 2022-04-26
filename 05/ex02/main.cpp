/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:12:03 by agirona           #+#    #+#             */
/*   Updated: 2022/04/26 11:29:01 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	std::cout << "||  SHRUBBERY  ||" << std::endl << std::endl;	
	try
	{
		ShrubberyCreationForm	test("Garden");
		Bureaucrat	antoine("Antoine", 136);
		antoine.signForm(test); //success
		test.execute(antoine); //success
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}

	std::cout << std::endl << "||  ROBOTOMY  ||" << std::endl << std::endl;	
	try
	{
		RobotomyRequestForm	test("Charle");
		Bureaucrat	patrick("Patrick", 45);
		patrick.signForm(test); //success
		test.execute(patrick); //success
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}

	std::cout << std::endl << "||  PRESIDENTIAL PARDON  ||" << std::endl << std::endl;	
	try
	{
		PresidentialPardonForm	test("Joe Dalton");
		Bureaucrat	willfried("Willfried", 6);
		willfried.signForm(test); //success
		willfried.executeForm(test); //too low
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}

	std::cout << std::endl << "||  UNSIGNED  ||" << std::endl << std::endl;	
	try
	{
		PresidentialPardonForm	test("Joe Dalton");
		Bureaucrat	willfried("Willfried", 6);
		test.execute(willfried); // UNSIGNED
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}

	std::cout << std::endl << "||  TOO LOW EXECUTE  ||" << std::endl << std::endl;	
	try
	{
		PresidentialPardonForm	test("Joe Dalton");
		Bureaucrat	willfried("Willfried", 6);
		test.beSigned(willfried); //success
		test.execute(willfried); // TOO LOW
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION : " << e.what() << std::endl;
	}

}
