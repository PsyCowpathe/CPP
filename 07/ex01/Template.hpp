/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:52:50 by agirona           #+#    #+#             */
/*   Updated: 2022/04/26 16:13:57 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef		TEMPLATE_HPP
# define		TEMPLATE_HPP

# include <iostream>

template <typename T>
void	iter(T *addr, int size, void (*function)(T))
{
	int		i;

	i = 0;
	while (i < size)
	{
		function(addr[i]);
		i++;
	}
}

#endif
