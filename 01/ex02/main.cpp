/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:40:32 by agirona           #+#    #+#             */
/*   Updated: 2022/03/30 14:59:35 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string		str;
	std::string		*stringPTR = &str;
	std::string		&stringREF = str;

	str = "HI THIS IS BRAIN";
	std::cout << "Address of STR : " << &str << std::endl;
	std::cout << "Address of PTR : " << stringPTR << std::endl;
	std::cout << "Address of REF : " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Address of STR : " << str << std::endl;
	std::cout << "Address of PTR : " << *stringPTR << std::endl;
	std::cout << "Address of REF : " << stringREF << std::endl;
	return (0);
}
