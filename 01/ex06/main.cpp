/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:17:18 by agirona           #+#    #+#             */
/*   Updated: 2022/03/31 19:46:50 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int		main(int argc, char **argv)
{
	Harl	harl;

	if (argc == 2)
		harl.filter(argv[1]);
	else
	{
		std::cout << "Error : Usage ./harlFilter <level>" << std::endl;
		return (1);
	}
	return (0);
}
