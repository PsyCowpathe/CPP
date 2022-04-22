/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:24:59 by agirona           #+#    #+#             */
/*   Updated: 2022/04/20 17:21:58 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a(1);
	Fixed b(5);

	std::cout << "ADITION/SOUSTRACTION" << std::endl;
	std::cout << "a + b  = 6 = ";
	std::cout << (a.toInt() + b.toInt()) << std::endl;
	std::cout << "a - b = -4 = ";
	std::cout << (a.toInt() - b.toInt()) << std::endl << std::endl;

	std::cout << "COMPARAISON" << std::endl;
	std::cout << "a > b = 0 = ";
	std::cout << (a > b) << std::endl;
	std::cout << "a < b = 1 = ";
	std::cout << (a < b) << std::endl << std::endl;
	std::cout << "a == b = 0 = ";
	std::cout << (a == b) << std::endl;
	std::cout << "a != b = 1 = ";
	std::cout << (a != b) << std::endl;
	std::cout << "a >= b = 0 = ";
	std::cout << (a >= b) << std::endl;
	std::cout << "a <= b = 1 = ";
	std::cout << (a <= b) << std::endl << std::endl;

	std::cout << "MIN/MAX" << std::endl;
	std::cout << "Min Res = 1 = ";
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << "Max Res = 5 = ";
	std::cout << Fixed::max(a, b) << std::endl << std::endl;

	std::cout << "POST INCREMENTATION" << std::endl;
	std::cout << "a = 1 = ";
	std::cout << a;
	std::cout << std::endl << "a++ = 1 = ";
	std::cout << a++ << std::endl;
	std::cout << "a++ = 1.00391 = ";
	std::cout << a++ << std::endl;

	std::cout << "PRE INCREMENTATION" << std::endl;
	a = 1;
	std::cout << "a = 1 = ";
	std::cout << a << std::endl;
	std::cout << "++a = 1.00391 = ";
	std::cout << ++a << std::endl;
	std::cout << "++a = 1.00781 = ";
	std::cout << ++a << std::endl << std::endl;

	std::cout << "POST DECREMENTATION" << std::endl;
	a = 1;
	std::cout << "a = 1 = ";
	std::cout << a << std::endl;
	std::cout << "a-- = 1 = ";
	std::cout << a-- << std::endl;
	std::cout << "a-- = 0.996094 = ";
	std::cout << a-- << std::endl << std::endl;

	std::cout << "PRE DECREMENTATION" << std::endl;
	a = 1;
	std::cout << "a = 1 = ";
	std::cout << a << std::endl;
	std::cout << "--a = 0.996094 = ";
	std::cout << --a << std::endl;
	std::cout << "--a = 0.992188 = ";
	std::cout << --a << std::endl << std::endl;

	std::cout << "MULTIPLICATION" << std::endl;
	a = 2;
	b = 5;
	std::cout << "a * b = 10 = ";
	std::cout << a * b << std::endl;
	b = -5;
	std::cout << "a * b = -10 = ";
	std::cout << a * b << std::endl;
	a = 10;
	b = 5;
	std::cout << "a / b = 2 = ";
	std::cout << a / b << std::endl;
	return 0;
}
