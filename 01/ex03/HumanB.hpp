/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:30:18 by agirona           #+#    #+#             */
/*   Updated: 2022/03/30 17:14:53 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include <iostream>

class	HumanB
{
	private :
		Weapon		*weapon;
		std::string	name;
		
	public :
		HumanB(std::string name);
		~HumanB( void );

		void	attack( void);
		void	setWeapon(Weapon &weapon);
};

#endif
