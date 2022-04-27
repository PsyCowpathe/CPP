/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:52:50 by agirona           #+#    #+#             */
/*   Updated: 2022/04/27 17:10:37 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef		TEMPLATE_HPP
# define		TEMPLATE_HPP

# include <iostream>

template <typename T>
void	iter(T *addr, unsigned int size, void (*function)(T &))
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		function(addr[i]);
		i++;
	}
}

template <typename T>
void	iter(const T *addr, unsigned int size, void (*function)(const T &))
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		function(addr[i]);
		i++;
	}
}

#endif
