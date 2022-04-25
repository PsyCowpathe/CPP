/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/25 16:39:39 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int     main(void)
{
    const Animal* meta = new Animal();
    const WrongAnimal* wrong = new WrongAnimal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* d = new WrongCat();

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    d->makeSound();
    meta->makeSound();
    wrong->makeSound();

    delete i;
    delete j;
    delete d;
    delete meta;
    delete wrong;
    return 0;
}
