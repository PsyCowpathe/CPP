/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/18 16:17:54 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "Abomination";
    std::cout << "Heew a new abomination was created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
    *this = wronganimal;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "This monstrosity is finaly gone !" << std::endl;
}

WrongAnimal     &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    this->type = rhs.type;
     return *this;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "bjkjdadks kill ... dwafwad me" << std::endl;
}