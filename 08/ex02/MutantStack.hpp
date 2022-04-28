/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:39:44 by agirona           #+#    #+#             */
/*   Updated: 2022/04/28 19:03:15 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef		MUTANTSTACK_HPP
# define	MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template<typename T, class Container = std::deque<T> >
class	MutantStack : public std::stack<T, Container>
{
	public :
		MutantStack();
		MutantStack(const MutantStack &mutantstack);
		~MutantStack();
		MutantStack	&operator=(const MutantStack &mutantstack);
		typedef typename Container::iterator iterator;
		iterator	begin() const;
		iterator	end() const ;
		iterator	begin();
		iterator	end();

};

#endif
