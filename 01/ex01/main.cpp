/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:12:15 by agirona           #+#    #+#             */
/*   Updated: 2022/04/04 16:12:37 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie	*horde;
	int		i;
	int		N;

	N = 10;
	if ((horde = zombieHorde(N, "saluuut")) == NULL)
		return (1);
	i = 0;
	while (i < N)
	{
		horde[i].annonce();
		i++;
	}
	delete [] horde;
	return (0);
}
