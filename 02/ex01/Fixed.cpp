/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/04 21:06:02 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int raw)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = raw << wtf;
}

Fixed::Fixed(const float raw)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(raw * (1 << wtf));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}


int		Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((this->value / (float)(1 << wtf)));
}

int		Fixed::toInt(void) const
{
	return (this->value >> wtf);
}


Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignment called" << std::endl;
	if (this != &rhs)
		this->value = rhs.getRawBits();
	return *this;
}

std::ostream	&operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}
