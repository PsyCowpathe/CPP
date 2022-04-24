/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:12:03 by agirona           #+#    #+#             */
/*   Updated: 2022/04/24 20:37:52 by agirona          ###   ########lyon.fr   */
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

	std::cout << std::endl << "||  TEST 1 DONT EXIST  ||" << std::endl << std::endl;	
	kevin.makeForm("test", "kevin");

	std::cout << "||  TEST 1 PRESIDENTIAL  ||" << std::endl << std::endl;	
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
