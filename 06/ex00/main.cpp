/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:11:01 by agirona           #+#    #+#             */
/*   Updated: 2022/04/25 18:03:00 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>

void	cast(char *raw)
{
	double	cast;

	cast = atof(raw);
	//CHAR
	if (cast < CHAR_MIN || cast > CHAR_MAX || std::isnan(cast))
		std::cout << "char: impossible" << std::endl;
	else if (isprint(static_cast<int>(cast)))
		std::cout << "char: '" << static_cast<char>(cast) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	//INT
	if (cast < -2147483648 || cast > 2147483647 || std::isnan(cast))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(cast) << std::endl;

	//FLOAT
	if (std::ceil(static_cast<float>(cast)) == static_cast<float>(cast))
		std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(cast) << "f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(cast) << "f" << std::endl;

	//DOUBLE
	if (std::ceil(cast) == cast)
		std::cout << "double: " << std::setprecision(1) << std::fixed << cast << std::endl;
	else
		std::cout << "double: " << cast << std::endl;
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		cast(argv[1]);
	}
	else
		std::cout << "Usage : ./Convert <literal>" << std::endl;
}
