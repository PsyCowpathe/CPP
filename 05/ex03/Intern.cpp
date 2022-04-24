/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 19:48:12 by agirona           #+#    #+#             */
/*   Updated: 2022/04/24 20:37:47 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Hey thingy ! Go make me a coffee ... now !" << std::endl;
}

Intern::Intern(const Intern &intern)
{
	*this = intern;
}

Intern::~Intern()
{
	std::cout << "WHAT ? You spilled it !? Go back to collegue kiddo !" << std::endl;
}

Intern	&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

Form	*Intern::Shrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::Robotomy(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::Pardon(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(const std::string name, const std::string target)
{
	int		i;
	Form	*(Intern::*tab[3])(const std::string target) = {&Intern::Shrubbery, &Intern::Robotomy, &Intern::Pardon};;

	i = 0;
	std::string	targets[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	while (i < 3 && name != targets[i])
		i++;
	if (i != 3)
		return ((this->*tab[i])(target));
	std::cout << "H..hi..him sorry sir but the form you asked dont exist. Please dont hit me ... again :(" << std::endl;
	return (nullptr);
}
