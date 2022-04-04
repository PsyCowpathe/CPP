/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:45:17 by agirona           #+#    #+#             */
/*   Updated: 2022/04/04 17:16:24 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void	replace(std::ifstream &file, std::ofstream &output, std::string s1, std::string s2)
{
	std::string		line;
	size_t			position;

	while (std::getline(file, line))
	{
		position = 0;
		while (position != std::string::npos)
		{
			position = line.find(s1, position);
			if (position != std::string::npos)
			{
				line.erase(position, s1.size());
				line.insert(position, s2);
				position += s2.size();
			}
		}
		output << line << std::endl;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream	file(argv[1]);
		std::ofstream	output(std::string(argv[1]) + ".replace");
		if (std::string(argv[2]).empty() == true)
		{
			std::cout << "Error search string must not be empty" << std::endl; 
			return (1);
		}
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
