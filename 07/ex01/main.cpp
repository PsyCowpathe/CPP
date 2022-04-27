/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:56:26 by agirona           #+#    #+#             */
/*   Updated: 2022/04/27 17:10:24 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"

template <typename T>
void	print(T element)
{
	std::cout << element << std::endl;
}

int		main(void)
{
	int		tab1[] = {1, 2, 3};
	char	tab2[] = {'a', 'b', 'c'};
	char	tab3[][10] = {"salut", "coucou", "non"};

	iter(tab1, 3, print);
	iter(tab2, 3, print);
	iter(tab3, 3, print);
}
