/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/04 22:51:23 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int raw)
{
	//std::cout << "Int constructor called" << std::endl;
	value = raw << wtf;
}

Fixed::Fixed(const float raw)
{
	//std::cout << "Float constructor called" << std::endl;
	value = roundf(raw * (1 << wtf));
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
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
	//std::cout << "Assignment called" << std::endl;
	if (this != &rhs)
		this->value = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed &rhs)
{
	if (this->value > rhs.value)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &rhs)
{
	if (this->value < rhs.value)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &rhs)
{
	if (this->value <= rhs.value)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &rhs)
{
	if (this->value >= rhs.value)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &rhs)
{
	if (this->value == rhs.value)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &rhs)
{
	if (this->value != rhs.value)
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed &rhs)
{
	Fixed	copy;

	copy.value = this->value + rhs.value;
	return (copy);
}

Fixed	Fixed::operator-(const Fixed &rhs)
{
	Fixed	copy;

	copy.value = this->value - rhs.value;
	return (copy);
}

Fixed	Fixed::operator*(const Fixed &rhs)
{
	Fixed	copy;

	copy.value = rhs.value * this->value >> wtf;
	return (copy);
}

Fixed	Fixed::operator/(const Fixed &rhs)
{
	Fixed	copy;

	copy.value = (rhs.value << wtf) / this->value;
	return (copy);
}

Fixed	Fixed::operator++(void)
{
	Fixed	*tmp;

	tmp = this;
	tmp->value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	(*this).value++;
	return (tmp);
}

Fixed	Fixed::operator--(void)
{
	Fixed	*tmp;

	tmp = this;
	tmp->value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = *this;
	(*this).value--;
	return (tmp);
}

std::ostream	&operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}


Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.value > b.value)
		return (b);
	return (a);
}

Fixed const	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.value > b.value)
		return (b);
	return (a);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.value > b.value)
		return (a);
	return (b);
}

Fixed const	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.value > b.value)
		return (a);
	return (b);
}