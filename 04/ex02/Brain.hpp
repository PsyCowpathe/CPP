/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:15:19 by agirona           #+#    #+#             */
/*   Updated: 2022/04/22 17:05:02 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class   Brain
{
    private :
        std::string     ideas[100];

    public :
        Brain();
        Brain(const Brain &brain);
        ~Brain();
		std::string	getIdeas(const int nb) const;
		void		setIdeas(const std::string idea, const int nb);
        Brain   &operator=(const Brain &brain);
};

#endif
