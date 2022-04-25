/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/25 18:18:09 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "What a cute litle cat, ps ps ps ps." << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat &cat) : Animal()
{
	this->brain = NULL;
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
	delete brain;
	brain = new Brain(*rhs.brain);
    return *this;
}

Brain	*Cat::getBrain(void) const
{
	return (this->brain);
}

void    Cat::makeSound() const
{
    std::cout << type + " : Miaouw !!!" << std::endl;
}
