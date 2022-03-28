/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:19:51 by agirona           #+#    #+#             */
/*   Updated: 2022/03/28 19:45:22 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie	zombie;
	Zombie	*test;

	randomChump("test");
	std::cout << std::endl;
	test = newZombie("ouioui");
	test->annonce();
	delete test;
}
