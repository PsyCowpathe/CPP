/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:59:42 by agirona           #+#    #+#             */
/*   Updated: 2022/03/14 16:05:47 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		int			key_word(const std::string str);

	private:
		Contact		contact[8];
		std::string	print[5];
		int			oldest;

		int			compare(const std::string str1, const std::string str2);
		void		print_and_get(std::string input, int i, int d);
		void		add(void);
		int			general_show(void);
		void		specific_show(void);
		void		contact_info(std::string str);
};

#endif
