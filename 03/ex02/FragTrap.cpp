/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/14 21:17:54 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->life = 100;
    this->mana = 100;
    this->damage = 30;
    std::cout << "FragTrap " + name + " created !" << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
    this->life = 100;
    this->mana = 100;
    this->damage = 30;
}

FragTrap::FragTrap(const FragTrap &FragTrap) : ClapTrap()
{
    *this = FragTrap;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " + name + " destructed !" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	if (this != &rhs)
    {
		this->name = rhs.name;
		this->life = rhs.life;
		this->mana = rhs.mana;
		this->damage = rhs.damage;
    }
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << name + " want to highFive ! Don't disapoint him ;)" << std::endl;
}