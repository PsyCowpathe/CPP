/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:14:02 by agirona           #+#    #+#             */
/*   Updated: 2022/03/28 19:45:26 by agirona          ###   ########lyon.fr   */
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

void			randomChump(std::string name);
Zombie			*newZombie(std::string name);

#endif
