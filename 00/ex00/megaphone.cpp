/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:26:03 by agirona           #+#    #+#             */
/*   Updated: 2022/03/04 15:57:13 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char	**argv)
{
	int		i;
	int		c;
	char	tmp;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		c = 0;
		while (argv[i][c])
		{
			tmp = toupper(argv[i][c++]);
			std::cout << tmp;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
