/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/14 18:17:54 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap created !" << std::endl;
    this->name = name;
    this->life = 10;
    this->mana = 10;
    this->damage = 0;
}

ClapTrap::ClapTrap()
{
    this->life = 10;
    this->mana = 10;
    this->damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap)
{
    *this = ClapTrap;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructed !" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
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


void    ClapTrap::attack(const std::string &target)
{
    if (this->mana >= 1 && this->life >= 1)
    {
        this->mana--;
        std::cout << "ClapTrap " << this->name << " attacks " <<
        target << ", causing " << this->damage << " points of damage !" <<
        std::endl;
    }
    else if (this->life >= 1)
        std::cout << "Ho no ! " << this->name << " is exaulted, he need to rest :/" << std::endl;
    else
        std::cout << "Ho no ! " << this->name << " is dead, he need to rest ... in peace :/" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->life -= amount;
    std::cout << "ClapTrap " << this->name << " taked " << amount <<
    " damage ! He now have " << this->life << " life point :/ "<< std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->mana >= 1 && this->life >= 1)
    {
        this->life += amount;
        this->mana--;
        std::cout << "ClapTrap" << this->name << " healed his self of " << amount <<
        " ! He now have " << this->life << " life point :D "<< std::endl;
    }
    else if (this->life >= 1)
        std::cout << "Ho no ! " << this->name << " is exaulted, he need to rest :/" << std::endl;
    else
        std::cout << "Ho no ! " << this->name << " is dead, he need to rest ... in peace :/" << std::endl;
}