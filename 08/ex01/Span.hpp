/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:20:30 by agirona           #+#    #+#             */
/*   Updated: 2022/04/27 21:52:19 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SPAN_HPP
# define		SPAN_HPP

# include <iostream>
# include <algorithm>

class	Span
{
	public :
		Span(const int max);
		Span(const Span &span);
		~Span();
		typedef	int		*iterator;
		Span::iterator	begin() const;
		Span::iterator	end() const;

		Span	&operator=(const Span &rhs);

		int		*getTab(void) const;
		int		getMax(void) const;
		void	addNumber(const int nb);
		int		shortestSpan();
		int		longestSpan();

		class	MaxCapacityException : public std::exception
		{
			public :
				virtual const char	*what() const throw ();
		};

	private :
		Span::iterator	_current;
		const int		_max;
		int				*_tab;
		Span();
		int		diff(const int a, const int b) const;

};

#endif
