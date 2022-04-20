/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/14 20:17:54 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private :
        bool    keep;
    public :
        ScavTrap(std::string name);
        ScavTrap();
        ScavTrap(const ScavTrap &ScavTrap);
        ~ScavTrap();
        void    attack(const std::string &target);
        void    guardGate();
        ScavTrap    &operator=(const ScavTrap &rhs);
};

#endif