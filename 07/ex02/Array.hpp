/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:15:42 by agirona           #+#    #+#             */
/*   Updated: 2022/04/26 18:07:51 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ARRAY_HPP
# define	ARRAY_HPP

# include <iostream>

template <typename T>

class	Array
{
	private :
		T					*_array;
		unsigned int		_size;
	public :
		Array();
		Array(unsigned int n);
		Array(const Array &array);
		~Array();

		Array	&operator=(const Array &rhs);
		T	&operator[](unsigned int i) const;
		
		int		size() const;

		class	OutOfRangeException : public std::exception
		{
			public :
				virtual	const char* what() const throw();
		};
};

#endif
