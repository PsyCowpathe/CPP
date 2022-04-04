/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:15:17 by agirona           #+#    #+#             */
/*   Updated: 2022/04/04 21:10:59 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	public :
		Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed(const int raw);
		Fixed(const float raw);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed	&operator=(const Fixed &rhs);

	private :
		int					value;
		static const int	wtf = 8;

};

std::ostream	&operator<<(std::ostream &stream, const Fixed &fixed);

#endif
