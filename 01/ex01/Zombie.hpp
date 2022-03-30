/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:14:02 by agirona           #+#    #+#             */
/*   Updated: 2022/03/30 14:33:43 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public :

		Zombie( void );
		~Zombie( void );
		void			annonce( void );
		void			setName(std::string name);

	private :

		std::string		name;

};

Zombie		*zombieHorde(int N, std::string name);

#endif
