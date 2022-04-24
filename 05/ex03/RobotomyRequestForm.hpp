/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:54:32 by agirona           #+#    #+#             */
/*   Updated: 2022/04/24 19:42:38 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	RobotomyRequestForm : public Form
{
	private :
		std::string		_target;

	public :
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm);
		~RobotomyRequestForm();

		RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);

		void			execute(const Bureaucrat &executor) const;
};

#endif
