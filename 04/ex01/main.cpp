/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/25 18:21:43 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int     main(void)
{
    Animal  *tab[10];
    int     i;

	std::cout << std::endl << "||  Create  ||" << std::endl << std::endl;
    i = 0;
    while (i < 10)
    {
        if (i < 5)
            tab[i] = new Cat();
        else
            tab[i] = new Dog();
		std::cout << std::endl;
        i++;
    }
	std::cout << "||  Changement d'une idee du brain d'un cat  ||" << std::endl << std::endl;
	std::cout << "cat[0] idea[1] = " + tab[0]->getBrain()->getIdeas(1) << std::endl;
	tab[0]->getBrain()->setIdeas("salut", 1);
	std::cout << "cat[0] idea[1] = " + tab[0]->getBrain()->getIdeas(1) << std::endl;

	std::cout << std::endl << "||  Test de copie profonde  ||" << std::endl << std::endl;
	Cat *cat1 = new Cat();
	Cat cat2(*cat1);
	cat1->getBrain()->setIdeas("J'ai ma propre zone memoire", 1);
	cat2.getBrain()->setIdeas("Et moi aussi !", 1);
	std::cout << "cat1 idea[1] = " + cat1->getBrain()->getIdeas(1) << std::endl;
	std::cout << "cat2 idea[1] = " + cat2.getBrain()->getIdeas(1) << std::endl;

	std::cout << std::endl << "||  Delete  ||" << std::endl << std::endl;
	i = 0;
	while (i < 10)
	{
		delete tab[i];
		std::cout << std::endl;
		i++;
	}
	delete cat1;
	std::cout << std::endl;
    return 0;
}
