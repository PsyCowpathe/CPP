/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:20:30 by agirona           #+#    #+#             */
/*   Updated: 2022/04/28 15:44:18 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SPAN_HPP
# define		SPAN_HPP

# include <iostream>
# include <algorithm>

class	Span
{
	public :
		Span(const unsigned int max);
		Span(const Span &span);
		~Span();
		typedef	int		*iterator;
		Span::iterator	begin() const;
		Span::iterator	last();
		Span::iterator	end() const;

		Span	&operator=(const Span &rhs);

		int		*getTab(void) const;
		int		getMax(void) const;
		int		getSize(void) const;
		void	addNumber(const int nb);
		void	rangeAddNumber(const unsigned int size, int (*function)(unsigned int), const unsigned int limit);
		int		shortestSpan();
		int		longestSpan();

		class	MaxCapacityException : public std::exception
		{
			public :
				virtual const char	*what() const throw ();
		};

		class	NoSpanException : public std::exception
		{
			public :
				virtual const char	*what() const throw ();
		};


	private :
		Span::iterator		_current;
		const unsigned int	_max;
		unsigned int		_size;
		int					*_tab;
		Span();
		int		diff(const int a, const int b) const;

};

#endif
