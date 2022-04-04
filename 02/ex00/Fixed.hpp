/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:15:17 by agirona           #+#    #+#             */
/*   Updated: 2022/04/04 19:53:19 by agirona          ###   ########lyon.fr   */
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
		~Fixed(void);
		int		getRawBits(void) const;	
		void	setRawBits(const int raw);	
		
		Fixed	&operator=(const Fixed &rhs);

	private :
		int					raw;
		static const int	wtf = 8;

};

#endif
