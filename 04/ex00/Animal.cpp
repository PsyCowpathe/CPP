/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/18 16:17:54 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "God (you) created a new Animal !" << std::endl;
    type = "Animal";
}

Animal::Animal(const Animal &animal)
{
    *this = animal;
}

Animal::~Animal()
{
    std::cout << "God is furious ! He made an Animal disapear from surface of earth :O" << std::endl;
}

Animal  &Animal::operator=(const Animal &rhs)
{
    this->type = rhs.type;

    return *this;
}

void    Animal::makeSound() const
{
    std::cout << type + " : Lacouloukakiii !!!" << std::endl;
}