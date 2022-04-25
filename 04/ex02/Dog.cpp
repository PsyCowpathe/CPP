/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/25 18:19:58 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Who's a good boy ?" << std::endl;
}

Dog::Dog(const Dog &dog) : AAnimal()
{
	this->brain = NULL;
    *this = dog;
}

Dog::~Dog()
{
    std::cout << ":throw a stick: Go ! Fetch !" << std::endl;
    delete brain;
}

Dog     &Dog::operator=(const Dog &rhs)
{
    type = rhs.type;
	delete brain;
    brain = new Brain(*rhs.brain);
    return *this;
}

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}

void    Dog::makeSound() const
{
    std::cout << type + " : Waouf !!!" << std::endl;
}
