/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 19:46:32 by agirona           #+#    #+#             */
/*   Updated: 2022/04/24 20:37:50 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Form;

class	Intern
{
	private :

	public :
		Intern();
		Intern(const Intern &intern);
		~Intern();
		Intern	&operator=(const Intern &rhs);
		Form	*makeForm(const std::string name, const std::string target);
		Form	*Shrubbery(const std::string target);
		Form	*Robotomy(const std::string target);
		Form	*Pardon(const std::string target);
};

#endif
