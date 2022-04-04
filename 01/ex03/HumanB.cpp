/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:50:32 by agirona           #+#    #+#             */
/*   Updated: 2022/04/04 17:05:33 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	if (name.empty() == true)
		this->name = "AnonymousB";
	std::cout << "Constructor of " << this->name << " called." << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "Destructor of " << this->name << " called." << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
