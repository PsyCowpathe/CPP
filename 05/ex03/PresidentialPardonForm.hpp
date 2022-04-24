/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 19:09:28 by agirona           #+#    #+#             */
/*   Updated: 2022/04/24 19:42:36 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	PresidentialPardonForm : public Form
{
	private :
		std::string		_target;

	public :
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &PresidentialPardonForm);
		~PresidentialPardonForm();

		PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);

		void			execute(const Bureaucrat &executor) const;
};

#endif
