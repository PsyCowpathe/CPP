/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:08:33 by agirona           #+#    #+#             */
/*   Updated: 2022/04/25 19:28:51 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int		nb;

	srand(time(NULL));
	nb = rand() % 3;
	if (nb == 0)
	{
		std::cout << "A created" << std::endl;
		return (new A());
	}
	else if (nb == 1)
	{
		std::cout << "B created" << std::endl;
		return (new B());
	}
	else
	{
		std::cout << "C created" << std::endl;
		return (new C());
	}
}

void	identify(Base *p)
{
	A	*a_detector;
	B	*b_detector;
	C	*c_detector;

	a_detector = dynamic_cast<A *>(p);
	b_detector = dynamic_cast<B *>(p);
	c_detector = dynamic_cast<C *>(p);
	if (!(a_detector == NULL))
		std::cout << "The pointer is an hiden A class !" << std::endl;
	if (!(b_detector == NULL))
		std::cout << "The pointer is an hiden B class !" << std::endl;
	if (!(c_detector == NULL))
		std::cout << "The pointer is an hiden C class !" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	&a_detector = dynamic_cast<A &>(p);
		(void)a_detector;
		std::cout << "The pointer is an hiden A class !" << std::endl;
	}
	catch (std::bad_cast &bc)
	{}

	try
	{
		B	&b_detector = dynamic_cast<B &>(p);
		(void)b_detector;
		std::cout << "The pointer is an hiden B class !" << std::endl;
	}
	catch (std::bad_cast &bc)
	{}

	try
	{
		C	&c_detector = dynamic_cast<C &>(p);
		(void)c_detector;
		std::cout << "The pointer is an hiden C class !" << std::endl;
	}
	catch (std::bad_cast &bc)
	{}
}

int		main(void)
{
	Base	*hiden;

	hiden = generate();
	identify(hiden);
	identify(*hiden);
}
