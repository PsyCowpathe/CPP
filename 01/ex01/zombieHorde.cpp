/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:12:31 by agirona           #+#    #+#             */
/*   Updated: 2022/04/04 16:12:08 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde;
	int		i;

	if (N <= 0)
		return (NULL);
	horde = new Zombie[N];
	if (horde == 0x0)
	{
		std::cout << "Error insufficient memory" << std::endl;
		return (NULL);
	}
	i = 0;
	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return (horde);
}	
