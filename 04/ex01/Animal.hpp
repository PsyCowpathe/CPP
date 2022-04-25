/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/25 18:09:54 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "iostream"
# include "Brain.hpp"

class Animal
{
    protected :
        std::string     type;

    public :
        Animal();
        Animal(const Animal &animal);
        virtual ~Animal();
        Animal          &operator=(const Animal &rhs);
		virtual Brain	*getBrain(void) const;
        virtual void    makeSound() const;
};

#endif
