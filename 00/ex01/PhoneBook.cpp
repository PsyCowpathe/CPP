/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:59:49 by agirona           #+#    #+#             */
/*   Updated: 2022/03/21 17:19:59 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
	this->print[0] = "first name :";
	this->print[1] = "last name :";
	this->print[2] = "nickname :";
	this->print[3] = "phone number :";
	this->print[4] = "darkest secret :";
	this->oldest = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
}

int		PhoneBook::compare(const std::string str1, const std::string str2)
{
	int		i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	PhoneBook::print_and_get(std::string print, int i, int d)
{
	std::string	input;

	std::cout << "\tPlease enter the ";
	std::cout << print << std::endl;
	while (input.empty())
		std::getline(std::cin, input);
	this->contact[i].setall(input, d);
}

void	PhoneBook::contact_info(std::string str)
{
	char			trunc[15];
	std::string		tmp;

	if (str.size() > 10)
	{
		std::istringstream tmp(str);
		tmp >> std::setw(10) >> trunc;
		std::cout << trunc << ".";
	}
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";
}

int		PhoneBook::general_show(void)
{
	int					i;
	int					d;
	std::stringstream	tmp;

	i = 0;
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     INDEX|First Name| Last Name| Nick Name| " << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while (i < 8 && this->contact[i].getset() == 1)
	{
		d = -1;
		std::cout << "|";
		while (d < 3)
		{
			if (d == -1)
			{
				tmp << i;
				contact_info(tmp.str());
			}
			else
				contact_info(this->contact[i].getall(d));
			d++;
		}
		std::cout << std::endl;
		i++;
	}
	std::cout << "|___________________________________________|" << std::endl << std::endl;
	return (i);
}

void	PhoneBook::specific_show(void)
{
	std::string			index;
	std::stringstream	tmp;
	int					value;
	int						d;

	std::cout << "\tPlease enter an index to see full contact information.";
	std::cout << index << std::endl;
	while (index.empty())
		std::getline(std::cin, index);
	if (index.find_first_not_of("01234567") == std::string::npos)
	{
		tmp << index;
		tmp >> value;
		if (this->contact[value].getset() == 1)
		{	
			d = 0;
			while (d < 5)
			{
				std::cout << this->print[d] << " ";
				std::cout << this->contact[value].getall(d) << std::endl;
				d++;
			}
		}
		else
			 std::cout << "\tError no contact is registered for this index." << std::endl;
	}
	else
	{
		std::cout << "\tError the index is incorect." << std::endl;
		std::cout << "\tReminder : You must only enter digits between 0 and 7." << std::endl;
	}
}

void	PhoneBook::add(void)
{
	int		i;
	int		d;
	std::string	input;

	i = 0;
	d = 0;
	while (this->contact[i].getset() != 0 && i < 8)
		i++;
	if (i == 8)
	{
		i = this->oldest;
		this->oldest = this->oldest + 1;
		if (this->oldest == 8)
			this->oldest = 0;
	}
	std::cout << "Creating new phone contact :" << std::endl;
	while (d < 5)
	{
		print_and_get(this->print[d], i, d);
		d++;
	}
	this->contact[i].setset(1);
}

int		PhoneBook::key_word(const std::string str)
{
	if (compare(str, "ADD") == 0)
	{
		add();
		return (2);
	}
	else if (compare(str, "SEARCH") == 0)
	{
		if (general_show() == 0)
			std::cout << "\tSorry there is no contact saved ! =(" << std::endl << std::endl;
		else
			specific_show();
		return (2);
	}
	else if (compare(str, "EXIT") == 0)
		return (0);
	return (1);
}
