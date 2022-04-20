/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/18 16:17:54 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "New Brain created." << std::endl;
}

Brain::Brain(const Brain &brain)
{
    *this = brain;
}

Brain::~Brain()
{
    std::cout << "Brain destructed." << std::endl;
}

Brain     &Brain::operator=(const Brain &rhs)
{
    int     i;

    i = 0;
    while (i < 100)
    {
        ideas[i] = rhs.ideas[i];
        i++;
    }
    return *this;
}