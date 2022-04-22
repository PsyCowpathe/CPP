/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:59:18 by agirona           #+#    #+#             */
/*   Updated: 2022/04/22 22:31:26 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int sign, const int exec) : _name(name), _sign(sign), _exec(exec)
{
	if (sign < 1 || exec < 1)
	{
		throw GradeTooHightException();
		return ;
	}
	if (sign > 150 || exec > 150)
	{
		throw GradeTooLowException();
		return ;
	}
	this->_signatory = "No one";
	this->_is_signed = 0;
	std::cout << "Form " + this->_name + " created !" << std::endl;
}

Form::Form() : _name("Default"), _sign(1), _exec(1)
{
	this->_signatory = "No one";
	this->_is_signed = 0;
	std::cout << "Unknow form created !" << std::endl;
}

Form::Form(const Form &form) : _name(form._name), _sign(form._sign), _exec(form._exec)
{
	*this = form;
	std::cout << ":photocopier noise:" << std::endl;
}

Form::~Form()
{
	std::cout << ":grinder noise:" << std::endl;
}

Form	&Form::operator=(const Form &rhs)
{
	this->_signatory = rhs._signatory;
	this->_is_signed = rhs._is_signed;
	return (*this);
}

std::string		Form::getName() const
{
	return (this->_name);
}

std::string		Form::getSignatory() const
{
	return (this->_signatory);
}

bool		Form::getIsSigned() const
{
	return (this->_is_signed);
}

int			Form::getSignGrade() const
{
	return (this->_sign);
}

int			Form::getExecGrade() const
{
	return (this->_exec);
}

void		Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->_is_signed == 1)
	{
		std::cout << "This form is already signed." << std::endl;
		return ;
	}
	if (bureaucrat.getGrade() <= this->_sign)
	{
		this->_is_signed = 1;
		this->_signatory = bureaucrat.getName();
	}
	else
		throw GradeTooLowException();
}

const char	*Form::GradeTooHightException::what() const throw()
{
	return ("Grade is too hight");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream	&operator<<(std::ostream &stream, const Form &form)
{
	if (form.getIsSigned() == 0)
	{
		stream << "The unsigned form " << form.getName() << " can be signed by grade " << form.getSignGrade()
		<< " bureaucrat and can be executed by grade " << form.getExecGrade() << " bureaucrat." << std::endl;
	}
	else
	{
		stream << "The signed form " << form.getName() << " can be signed by grade " << form.getSignGrade()
		<< " bureaucrat and can be executed by grade " << form.getExecGrade() << " bureaucrat." << std::endl;
		stream << "This form was signed by " << form.getSignatory() << "." << std::endl;
	}
	return (stream);
}
