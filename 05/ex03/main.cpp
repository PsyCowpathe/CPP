/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:12:03 by agirona           #+#    #+#             */
/*   Updated: 2022/04/26 11:34:10 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Intern	kevin;

	std::cout << std::endl << "||  INVALID FORM  ||" << std::endl << std::endl;	
	kevin.makeForm("test", "kevin");

	std::cout << std::endl << "||  SHRUBBERY CREATION ... CREATION  ||" << std::endl << std::endl;	
	try
	{
		Bureaucrat	patrick("Patrick", 1);
		Form *test(kevin.makeForm("shrubbery creation", "kevin"));
		patrick.signForm(*test);
		test->execute(patrick);
		delete test;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "||  ROBOTOMY REQUEST CREATION  ||" << std::endl << std::endl;	
	try
	{
		Bureaucrat	patrick("Patrick", 1);
		Form *test(kevin.makeForm("robotomy request", "kevin"));
		patrick.signForm(*test);
		test->execute(patrick);
		delete test;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "||  PRESIDENTIAL PARDON CREATION  ||" << std::endl << std::endl;	
	try
	{
		Bureaucrat	patrick("Patrick", 1);
		Form *test(kevin.makeForm("presidential pardon", "kevin"));
		patrick.signForm(*test);
		test->execute(patrick);
		delete test;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
