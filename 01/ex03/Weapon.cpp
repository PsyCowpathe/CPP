/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:23:16 by agirona           #+#    #+#             */
/*   Updated: 2022/04/04 17:05:31 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	std::cout << "Constructor of Weapon called" << std::endl;
	this->type = type;
	if (type.empty() == true)
		this->type = "bare hands";
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor of Weapon called." << std::endl;
}

const std::string	&Weapon::getType( void ) const
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
	if (type.empty() == true)
		this->type = "bare hands";
}
