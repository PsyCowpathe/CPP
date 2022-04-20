/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:24:59 by agirona           #+#    #+#             */
/*   Updated: 2022/04/04 22:51:24 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a(1);
	Fixed b(5);

	std::cout << "Res = 0 = ";
	std::cout << (a > b) << std::endl;
	std::cout << "Res = 1 = ";
	std::cout << (a < b) << std::endl;
	std::cout << "Res = 6 = ";
	std::cout << (a.toInt() + b.toInt()) << std::endl;
	std::cout << "Res = -4 = ";
	std::cout << (a.toInt() - b.toInt()) << std::endl;
	std::cout << "Res = 0 = ";
	std::cout << (a == b) << std::endl;
	std::cout << "Res = 1 = ";
	std::cout << (a != b) << std::endl;
	std::cout << "Res = 0 = ";
	std::cout << (a >= b) << std::endl;
	std::cout << "Res = 1 = ";
	std::cout << (a <= b) << std::endl;
	std::cout << "Min Res = 1 = ";
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << "Max Res = 5 = ";
	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << "Post++ Res = 1 = ";
	std::cout << a;
	std::cout << std::endl << "Res = 1 = ";
	std::cout << a++ << std::endl;
	std::cout << "Res = 1.00391 = ";
	std::cout << a++ << std::endl;
	a = 1;
	std::cout << "Pre++ Res = 1 = ";
	std::cout << a;
	std::cout << std::endl << "Res = 1.00391 = ";
	std::cout << ++a << std::endl;
	std::cout << "Res = 1.00781 = ";
	std::cout << ++a << std::endl << std::endl;

	a = 1;
	std::cout << "Post-- Res = 1 = ";
	std::cout << a;
	std::cout << std::endl << "Res = 1 = ";
	std::cout << a-- << std::endl;
	std::cout << "Res = 0.996094 = ";
	std::cout << a-- << std::endl;
	a = 1;
	std::cout << "Pre-- Res = 1 = ";
	std::cout << a;
	std::cout << std::endl << "Res = 0.996094 = ";
	std::cout << --a << std::endl;
	std::cout << "Res = 0.992188 = ";
	std::cout << --a << std::endl;
	return 0;
}
