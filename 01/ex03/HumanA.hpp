/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:29:59 by agirona           #+#    #+#             */
/*   Updated: 2022/04/04 17:05:33 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include <iostream>

class	HumanA
{
	private :
		Weapon		&weapon;
		std::string	name;
		
	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA( void );

		void	attack( void);
};

#endif
