/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/22 17:04:57 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "New Brain created." << std::endl;
	ideas[0] = "eat";
	ideas[1] = "drink";
	ideas[2] = "sleep";
	ideas[3] = "attack";
	ideas[4] = "run";
}

Brain::Brain(const Brain &brain)
{
    *this = brain;
}

Brain::~Brain()
{
    std::cout << "Brain destructed." << std::endl;
}

std::string		Brain::getIdeas(const int nb) const
{
	if (nb >= 0 && nb < 100)
		return (this->ideas[nb]);
	else
		return ("Brain overflow");
}

void	Brain::setIdeas(const std::string idea, const int nb)
{
	if (nb >= 0 && nb < 100)
		this->ideas[nb] = idea;
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
