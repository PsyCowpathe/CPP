/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/22 17:12:30 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "iostream"
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain   *brain;

    public :
        Dog();
        Dog(const Dog &dog);
        ~Dog();
        Dog     &operator=(const Dog &rhs);
		Brain	*getBrain(void) const;
        void            makeSound() const;
};

#endif
