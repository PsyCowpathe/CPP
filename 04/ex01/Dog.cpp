/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/18 16:17:54 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Who's a good boy ?" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal()
{
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
    brain = rhs.brain;
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << type + " : Waouf !!!" << std::endl;
}