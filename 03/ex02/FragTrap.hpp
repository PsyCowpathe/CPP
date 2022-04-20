/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 20:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/15 21:17:54 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private :
   
    public :
        FragTrap(std::string name);
        FragTrap();
        FragTrap(const FragTrap &fragtrap);
        ~FragTrap();
        FragTrap    &operator=(const FragTrap &rhs);

        void        highFivesGuys(void);
};


#endif