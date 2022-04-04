/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:11:13 by agirona           #+#    #+#             */
/*   Updated: 2022/04/04 16:01:37 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	std::cout << "Terrorised employee : Harl is at the front door. Quick lower yourself !" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Appeased employee : I think he's gone ! We can stop hiding from behind the counter." << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "Harl : Hmm where is everyone ?" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Harl : It's curious, why theres is never anyone behind that ugly counter ?!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Harl : If no one come to me in 30 seconds, I'll will review this store with one stars in Karen Map !" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Harl : Alright I'll call the consumer service then !" << std::endl;
}

void	Harl::complain(std::string level)
{
	int		i;

	tab[0] = &Harl::debug;
	tab[1] = &Harl::info;
	tab[2] = &Harl::warning;
	tab[3] = &Harl::error;
	i = 0;
	while (i < 4)
	{
		if (level == this->levels[i])
			(this->*tab[i])();
		i++;
	}
}

void	Harl::filter(std::string level)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		if (level == this->levels[i])
			break ;
		i++;
	}
	switch (i)
	{
		case (4) :
		{
			std::cout << "Harl : ~Annoying noise~" << std::endl;
			break ;
		}
		case (0) :
			this->complain(this->levels[0]);
		case (1) :
			this->complain(this->levels[1]);
		case (2) :
			this->complain(this->levels[2]);
		case (3) :
			this->complain(this->levels[3]);
	}
}
