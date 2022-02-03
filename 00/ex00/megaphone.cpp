/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:26:03 by agirona           #+#    #+#             */
/*   Updated: 2022/02/03 17:21:31 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	putstr(const char *str)
{
	std::cout << str;
}

void	putchar(const char c)
{
	std::cout << c;
}

int		main(int argc, char	**argv)
{
	int		i;
	int		c;

	i = 1;
	if (argc == 1)
		putstr("* LOUD AND UNBEARABLE FEEDBACK NOISE *\n");
	while (i < argc)
	{
		c = 0;
		while (argv[i][c])
		{
			if (argv[i][c] >= 'a' && argv[i][c] <= 'z')
				putchar(argv[i][c] - 32);
			else
				putchar(argv[i][c]);
			c++;
		}
		i++;
		if (i < argc)
			putchar(' ');
		else
			putchar('\n');
	}
	return (0);
}
