/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:39:44 by agirona           #+#    #+#             */
/*   Updated: 2022/04/28 17:52:28 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef		MUTANTSTACK_TPP
# define	MUTANTSTACK_TPP

# include "MutantStack.hpp"

template <typename T, class Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin() const
{
	return (this->c.begin());
}

template <typename T, class Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end() const
{
	return (this->c.end());
}

template <typename T, class Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin()
{
	return (this->c.begin());
}

template <typename T, class Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end()
{
	return (this->c.end());
}

template <typename T, class Container>
MutantStack<T, Container>::MutantStack()
{}

template <typename T, class Container>
MutantStack<T, Container>::MutantStack(const MutantStack &mutantstack) : std::stack<T, Container>(mutantstack)
{}

template <typename T, class Container>
MutantStack<T, Container>::~MutantStack()
{}

template <typename T, class Container>
MutantStack<T, Container>		&MutantStack<T, Container>::operator=(const MutantStack &rhs)
{
	if (*this != rhs)
		std::stack<T>::operator=(rhs);
	return (*this);
}

#endif
