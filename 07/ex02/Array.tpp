/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:18:18 by agirona           #+#    #+#             */
/*   Updated: 2022/04/26 17:15:35 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ARRAY_TPP
# define	ARRAY_TPP

# include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	std::cout << "Empty Array created." << std::endl;
	_array = new T[0];
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Array created." << std::endl;
	_array = new T[n];
	_size = n;
}

template <typename T>
Array<T>::Array(const Array &array)
{
	std::cout << "Array copied." << std::endl;
	_array = nullptr;
	*this = array;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Array destructed." << std::endl;
	delete [] _array;
}

template <typename T>
int		Array<T>::size() const
{
	return (_size);
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &rhs)
{
	unsigned int	i;

	if (&rhs != this)
	{
		i = 0;
		delete [] _array;
		_array = new T[rhs._size];
		_size = rhs._size;
		while (i < _size)
		{
			_array[i] = rhs._array[i];
			i++;
		}
	}
	return (*this);
}

template <typename T>
const char	*Array<T>::OutOfRangeException::what() const throw()
{
	return ("Can't access this index because he is out of range !");
}

template <typename T>
T	&Array<T>::operator[](unsigned int i) const
{
	if (i < 0 || i > _size) // may add _size == 0 for real empty array
		throw OutOfRangeException();
	return (_array[i]);
}

#endif
