/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:37:44 by agirona           #+#    #+#             */
/*   Updated: 2022/04/25 19:00:31 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct	Data
{
	std::string		welcome;
	std::string		goodbye;
	int				year;
};

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int		main(void)
{
	Data		hi;
	Data		*result;

	hi.welcome = "Salut";
	hi.goodbye = "A +";
	hi.year = 2022;
	std::cout << "Struct : " << &hi << " | ";
	std::cout << "Welcome : " << hi.welcome << " | ";
	std::cout << "Goodbye : " << hi.goodbye << " | ";
	std::cout << "Year : " << hi.year << std::endl;
	result = deserialize(serialize(&hi));
	std::cout << "Struct : " << result << " | ";
	std::cout << "Welcome : " << result->welcome << " | ";
	std::cout << "Goodbye : " << result->goodbye << " | ";
	std::cout << "Year : " << result->year << std::endl;
}
