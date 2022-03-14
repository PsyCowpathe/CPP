/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:19:26 by agirona           #+#    #+#             */
/*   Updated: 2022/03/14 16:05:51 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	this->set = 0;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Contact::setall(std::string str, int d)
{
	this->data[d] = str;
}

std::string	Contact::getall(int d) const
{
	return (this->data[d]);
}

int		Contact::getset(void) const
{
	return (this->set);
}

void	Contact::setset(int state)
{
	this->set = state;
}
