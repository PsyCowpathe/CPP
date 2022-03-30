/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:45:17 by agirona           #+#    #+#             */
/*   Updated: 2022/03/30 19:39:44 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void	replace(std::ifstream &file, std::ofstream &output, std::string s1, std::string s2)
{
	std::string		line;
	int				position;
	int				size;

	size = s1.size();
	while (std::getline(file, line))
	{
		position = 0;
		while (position != -1)
		{
			position = line.find(s1);
			if (position != -1)
			{
				line.erase(position, size);
				line.insert(position, s2);
			}
		}
		output << line << std::endl;
		std::cout << position << std::endl;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream	file(argv[1]);
		std::ofstream	output(std::string(argv[1]) + ".replace");
		if (file.is_open())
		{
			replace(file, output, argv[2], argv[3]);
			file.close();
		}
		else
		{
			std::cout << "Error could not open file" << std::endl; 
			return (1);
		}
	}
	else
	{
		std::cout << "Error missing parameter please enter <filename> <string1> <string2>" << std::endl; 
		return (1);
	}
	return (0);
}
