/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:22:37 by agirona           #+#    #+#             */
/*   Updated: 2022/04/28 15:44:15 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(const unsigned int max) : _max(max)
{
	//std::cout << "Constructor called." << std::endl;
	_tab = new int[_max];
	_size = 0;
	_current = &_tab[0];
}

Span::Span() : _max(0)
{
	//std::cout << "Constructor by default called." << std::endl;
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
	unsigned int	i;

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
		_current = rhs._current;
		_size = rhs._size;
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

Span::iterator	Span::last()
{
	return (begin() + _size - 1);
}

int		*Span::getTab(void) const
{
	return (_tab);
}

int		Span::getMax(void) const
{
	return (_max);
}

int		Span::getSize(void) const
{
	return (_size);
}

void	Span::addNumber(const int nb)
{
	if (_size == _max)
		throw MaxCapacityException();
	else
	{
		std::cout << "Added number : " << nb << std::endl;
		*_current = nb;
		_current++;
		_size++;
		std::cout << "Capacity left : " << _max - _size << std::endl << std::endl;
	}
}

void	Span::rangeAddNumber(const unsigned int size, int (*function)(const unsigned int), const unsigned int limit)
{
	unsigned int	i;

	i = 0;
	if (_size + size > _max)
		throw MaxCapacityException();
	std::cout << "Added " << size << " numbers." << std::endl; 
	_size += size;
	std::cout << "Capacity left : " << _max - _size << std::endl << std::endl;
	while (i < size)
	{
		*_current = function(limit);
		_current = _current + 1;
		i++;
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

	if (copy.getSize() == 0 || copy.getSize() == 1)
		throw NoSpanException();
	std::sort(copy.begin(), copy.last());
	it = copy.begin();
	e = copy.end();
	min = INT_MAX;
	while ((it + 1) != e)
	{
		res = Span::diff(*it, *(it + 1));
		if (res < min)
			min = res;
		it++;
	}
	return (min);
}

int		Span::longestSpan()
{
	Span	copy(*this);

	if (copy.getSize() == 0 || copy.getSize() == 1)
		throw NoSpanException();
	std::sort(copy.begin(), copy.last() + 1);
	copy._current = copy.last();
	return (*copy.last() - *copy.begin());
}



const char	*Span::MaxCapacityException::what() const throw ()
{
	return ("Can't add new element because the maximum capacity has been reached !");
}

const char	*Span::NoSpanException::what() const throw ()
{
	return ("No span can be calculated because there is not enough numbers stocked !");
}
