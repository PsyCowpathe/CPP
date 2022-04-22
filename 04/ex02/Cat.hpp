/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/22 17:11:14 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "iostream"
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
    private :
        Brain   *brain;
        
    public :
        Cat();
        Cat(const Cat &cat);
        ~Cat();
        Cat     &operator=(const Cat &rhs);
		Brain	*getBrain(void) const;
        void            makeSound() const;
};

#endif
