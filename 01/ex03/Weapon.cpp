/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:23:16 by agirona           #+#    #+#             */
/*   Updated: 2022/03/30 17:14:49 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
	std::cout << "Constructor of Weapon called" << std::endl;
	this->type = type;
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor of Weapon called" << std::endl;
}

const std::string	&Weapon::getType( void ) const
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
