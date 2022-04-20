/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/18 16:17:54 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "Atrocity";
    std::cout << "A new ... hmm ... Cat ? Was created." << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat) : WrongAnimal()
{
    *this = wrongcat;
}

WrongCat::~WrongCat()
{
    std::cout << "This atrocity is finaly gone !" << std::endl;
}

WrongCat     &WrongCat::operator=(const WrongCat &rhs)
{
    this->type = rhs.type;
     return *this;
}

void    WrongCat::makeSound() const
{
    std::cout << "Miauwedads kill ... dwafwadsd mew" << std::endl;
}