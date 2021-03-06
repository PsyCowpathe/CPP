/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/20 15:51:34 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "iostream"
# include "Animal.hpp"

class Cat : public Animal
{
    private :
   
    public :
        Cat();
        Cat(const Cat &cat);
        ~Cat();
        Cat     &operator=(const Cat &rhs);
        void            makeSound() const;
};

#endif
