/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:15:12 by agirona           #+#    #+#             */
/*   Updated: 2022/04/26 11:07:37 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, const int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHightException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
	std::cout << "Congrats " + this->_name + " you are hired !" << std::endl;
}

Bureaucrat::Bureaucrat() : _name("Default")
{
	this->_grade = 150;
	std::cout << "Sight, thoses bureaucrats, all the same." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat._name)
{
	*this = bureaucrat;
	std::cout << "Congrats " + this->_name + " ! Wait ... you remind me of someone." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->_name + " you are fired !" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs._grade;
	return	*this;
}

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &rhs)
{
	stream << "Bureaucrat " << rhs.getName() << " of grade : " << rhs.getGrade() << std::endl;
	return (stream);
}

std::string		Bureaucrat::getName() const
{
	return (this->_name);
}

int		Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::upgrade()
{
	if (this->_grade > 1)
	{
		std::cout << "Im proud of you " + this->_name + "." << std::endl;
		this->_grade--;
	}
	else
		throw GradeTooHightException();
}

void	Bureaucrat::downgrade()
{
	std::cout << this->_name + ", im really disappointed ..." << std::endl;
	if (this->_grade < 150)
		this->_grade++;
	else
		throw GradeTooLowException();
}

const char	*Bureaucrat::GradeTooHightException::what() const throw()
{
	return ("Grade is too hight");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}
