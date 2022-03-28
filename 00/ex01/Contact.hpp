/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:20:37 by agirona           #+#    #+#             */
/*   Updated: 2022/03/28 17:54:32 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);

		void		setall(std::string, int d);
		std::string	getall(int d) const;
		void		setset(int state);
		int			getset(void) const;

	private:
			std::string	data[5];
			int		set;
};

#endif

