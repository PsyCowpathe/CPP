/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:22:37 by agirona           #+#    #+#             */
/*   Updated: 2022/04/27 21:52:15 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(const int max) : _max(max)
{
	std::cout << "Constructor called." << std::endl;
	_tab = new int[_max];
	_current = &_tab[0];
}

Span::Span() : _max(0)
{
	std::cout << "Constructor by default called." << std::endl;
}

Span::Span(const Span &span) : _max(span._max)
{
	//std::cout << "Constructor by copy called." << std::endl;
	_tab = NULL;
	*this = span;
}

Span::~Span()
{
	//std::cout << "Destructor called." << std::endl;
}

Span	&Span::operator=(const Span &rhs)
{
	int		i;

	if (this != &rhs)
	{
		i = 0;
		delete [] _tab;
		_tab = new int[rhs._max];
		while (i < rhs._max)
		{
			_tab[i] = rhs._tab[i];
			i++;
		}
	}
	return (*this);
}

Span::iterator	Span::begin() const
{
	return (_tab);
}

Span::iterator	Span::end() const
{
	return (_tab + _max);
}

int		*Span::getTab(void) const
{
	return (_tab);
}

int		Span::getMax(void) const
{
	return (_max);
}

void	Span::addNumber(const int nb)
{
	if (_current == Span::end())
		throw MaxCapacityException();
	else
	{
		*_current = nb;
		_current++;
	}
}

int		Span::diff(const int a, const int b) const
{
	if (a < b)
		return (abs(a - b));
	else
		return (abs(b - a));
}

int		Span::shortestSpan()
{
	Span	copy(*this);
	int		min;
	int		res;
	Span::iterator	it;
	Span::iterator	e;

	std::sort(copy.begin(), copy.end());
	it = copy.begin();
	e = copy.end();
	min = INT_MAX;
	while ((it + 1) != e)
	{
		res = Span::diff(*it, *(it + 1));
		if (res < min && *it != *(it + 1))
			min = res;
		it++;
	}
	return (min);
}

int		Span::longestSpan()
{
	Span	copy(*this);

	std::sort(copy.begin(), copy.end());
	return (*std::max_element(copy.begin(), copy.end()) - *std::min_element(copy.begin(), copy.end()));
}

const char	*Span::MaxCapacityException::what() const throw ()
{
	return ("Can't add new element because the maximum capacity has been reached !");
}
