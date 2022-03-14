/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:09:36 by agirona           #+#    #+#             */
/*   Updated: 2022/03/14 16:06:41 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main(void)
{
	PhoneBook	book;
	std::string	input;
	int		ret;

	ret = 2;
	while (ret > 0)
	{
		if (ret != 1)
			std::cout << "Available command : \"ADD\", \"SEARCH\", \"EXIT\"." << std::endl;
		std::getline(std::cin, input);
		ret = book.key_word(input);
	}
	return (0);
}
