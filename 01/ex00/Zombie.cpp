/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:16:43 by agirona           #+#    #+#             */
/*   Updated: 2022/03/28 19:45:24 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "created : " << this->name << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "destructed : " << this->name << std::endl;
}

void	Zombie::annonce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie	*newZombie(std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie;
	zombie->setName(name);
	return (zombie);
}

void	randomChump(std::string name)
{
	Zombie	zombie;

	zombie.setName(name);
	zombie.annonce();
}
