/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 17:23:56 by agirona           #+#    #+#             */
/*   Updated: 2022/04/24 19:42:32 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
	Form("ShrubberyCreationName", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("ShrubberyCreationName", 145, 137), _target("Default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm) :
	Form("ShrubberyCreationName", 145, 137), _target(ShrubberyCreationForm._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	_target = rhs._target;
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (this->getIsSigned() == 0)
		throw UnsignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw ExecTooLowException();
	std::ofstream	file;

	std::cout << "Tree created!" << std::endl;
	file.open(_target + "_shrubbery");
	file << TREE;
	file.close();
}
