/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:15:17 by agirona           #+#    #+#             */
/*   Updated: 2022/04/20 17:01:23 by agirona          ###   ########lyon.fr   */
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
		Fixed	operator+(const Fixed &rhs);
		Fixed	operator-(const Fixed &rhs);
		bool	operator>(const Fixed &rhs);
		bool	operator<(const Fixed &rhs);
		bool	operator==(const Fixed &rhs);
		bool	operator!=(const Fixed &rhs);
		bool	operator>=(const Fixed &rhs);
		bool	operator<=(const Fixed &rhs);
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);
		Fixed	operator*(const Fixed &rhs);
		Fixed	operator/(const Fixed &rhs);

		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static Fixed const	&min(const Fixed &a, const Fixed &b);
		static Fixed const	&max(const Fixed &a, const Fixed &b);

		Fixed	&operator=(const Fixed &rhs);

	private :
		int					value;
		static const int	wtf = 8;

};

std::ostream	&operator<<(std::ostream &stream, const Fixed &fixed);

#endif
