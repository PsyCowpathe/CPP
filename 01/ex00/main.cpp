/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:19:51 by agirona           #+#    #+#             */
/*   Updated: 2022/03/30 14:35:48 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie	*test;

	randomChump("test");
	std::cout << std::endl;
	test = newZombie("ouioui");
	if (test == NULL)
	{
		std::cout << "Error Insufficient memory" << std::endl;
		return (1);
	}
	test->annonce();
	delete test;
}
