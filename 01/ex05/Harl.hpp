/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:08:22 by agirona           #+#    #+#             */
/*   Updated: 2022/03/31 19:18:23 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class	Harl
{
	private :

		std::string	levels[4];
		void	(Harl::*tab[4])(void);

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public :

		Harl( void);
		~Harl( void);

		void complain( std::string level );
};

#endif
