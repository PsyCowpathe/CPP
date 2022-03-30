/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:11:45 by agirona           #+#    #+#             */
/*   Updated: 2022/03/30 17:14:54 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class	Weapon
{
	private :
		std::string		type;

	public :
		Weapon(std::string type);
		~Weapon( void );
		const std::string	&getType( void ) const;
		void				setType(std::string type);
};

#endif
