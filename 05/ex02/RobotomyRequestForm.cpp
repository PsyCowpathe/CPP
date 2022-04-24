/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:49:16 by agirona           #+#    #+#             */
/*   Updated: 2022/04/24 19:42:32 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
	Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm() :
	Form("RobotomyRequestForm", 72, 45), _target("Default")
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm) :
	Form("RobotomyRequestForm", 72, 45), _target(RobotomyRequestForm._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	_target = rhs._target;
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (this->getIsSigned() == 0)
		throw UnsignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw ExecTooLowException();

	std::cout << "*drill noise*" << std::endl;
	srand(time(NULL));
	if ((rand() % 2) == 0) 
		std::cout << this->_target + " is sucessfully lobotomised !" << std::endl;
	else
		std::cout << this->_target + " escaped ... with all his brains." << std::endl;
}
