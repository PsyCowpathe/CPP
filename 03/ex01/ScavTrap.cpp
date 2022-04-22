/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/20 19:32:45 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << name + " created !" << std::endl;
	this->name = name;
	this->life = 100;
	this->mana = 50;
	this->damage = 20;
	this->keep = 0;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << name + " created by default !" << std::endl;
	this->life = 100;
	this->mana = 50;
	this->damage = 20;
	this->keep = 0;
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap) : ClapTrap()
{
	*this = ScavTrap;
	std::cout << name + " created by copy !" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << name + " destructed !" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->life = rhs.life;
		this->mana = rhs.mana;
		this->damage = rhs.damage;
		this->keep = rhs.keep;
	}
	return *this;
}

void    ScavTrap::attack(const std::string &target)
{
	if (this->mana >= 1 && this->life >= 1)
	{
		this->mana--;
		std::cout << "ClapTrap " << this->name << " attack " <<
		target + " with a rock" << ", causing " << this->damage << " points of damage !" <<
		std::endl;
	}
	else if (this->life >= 1)
		std::cout << "Ho no ! " << this->name << " is exaulted, he need to rest :/" << std::endl;
	else
		std::cout << "Ho no ! " << this->name << " is dead, he need to rest ... in peace :/" << std::endl;
}

void    ScavTrap::guardGate()
{
	if (keep == 0)
	{
		keep = 1;
		std::cout << name + " is now in gate keeping state !" << std::endl;
	}
	else
	{
		keep = 0;
		std::cout << name + " is no more in gate keeping state !" << std::endl;
	}
}
