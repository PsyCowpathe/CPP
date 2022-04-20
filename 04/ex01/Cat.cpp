/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/18 16:17:54 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "What a cute litle cat, ps ps ps ps." << std::endl;
}

Cat::Cat(const Cat &cat) : Animal()
{
    *this = cat;
}

Cat::~Cat()
{
    std::cout << "F***ing Cat, he bited me !" << std::endl;
    delete brain;
}

Cat     &Cat::operator=(const Cat &rhs)
{
    type = rhs.type;
    brain = rhs.brain;
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << type + " : Miaouw !!!" << std::endl;
}