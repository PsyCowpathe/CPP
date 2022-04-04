/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:50:14 by agirona           #+#    #+#             */
/*   Updated: 2022/04/04 17:05:32 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
	if (name.empty() == true)
		this->name = "AnonymousA";
	std::cout << "Constructor of " << this->name << " called." << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor of " << this->name << " called." << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
