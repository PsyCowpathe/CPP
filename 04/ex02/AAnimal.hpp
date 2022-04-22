/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/22 17:11:15 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "iostream"
# include "Brain.hpp"

class AAnimal
{
    protected :
        std::string     type;

    public :
        AAnimal();
        AAnimal(const AAnimal &animal);
        virtual ~AAnimal();
        AAnimal          &operator=(const AAnimal &rhs);
		virtual Brain	*getBrain(void) const = 0;
        virtual void    makeSound() const;
};

#endif
