/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/22 17:11:12 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "God (you) created a new Animal !" << std::endl;
    type = "Animal";
}

AAnimal::AAnimal(const AAnimal &animal)
{
    *this = animal;
}

AAnimal::~AAnimal()
{
    std::cout << "God is furious ! He made an Animal disapear from surface of earth :O" << std::endl;
}

AAnimal  &AAnimal::operator=(const AAnimal &rhs)
{
    this->type = rhs.type;

    return *this;
}

Brain	*AAnimal::getBrain(void) const
{
	return (NULL);
}

void    AAnimal::makeSound() const
{
    std::cout << type + " : Lacouloukakiii !!!" << std::endl;
}
