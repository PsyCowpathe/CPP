/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:42:01 by agirona           #+#    #+#             */
/*   Updated: 2022/04/27 19:19:25 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef		EASYFIND_HPP
# define	EASYFIND_HPP

# include <algorithm>

template< typename T>
typename T::iterator	easyfind(T &list, int to_find)
{
	return (find(list.begin(), list.end(), to_find));
}

#endif
