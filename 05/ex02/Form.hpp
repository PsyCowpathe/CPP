/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:57:30 by agirona           #+#    #+#             */
/*   Updated: 2022/04/24 19:42:37 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	private :
		const std::string	_name;
		std::string			_signatory;
		bool				_is_signed;
		const int			_sign;
		const int			_exec;

	public :
		Form(const std::string name, const int sign, const int exec);
		Form();
		Form(const Form &form);
		~Form();
		Form	&operator=(const Form &rhs);
		std::string		getName() const;
		std::string		getSignatory() const;
		bool			getIsSigned() const;
		int				getSignGrade() const;
		int				getExecGrade() const;
		void			beSigned(Bureaucrat &bureaucrat);
		virtual void	execute(const Bureaucrat &executor) const = 0;

		class	GradeTooHightException : public std::exception
		{
			public :
				virtual const char	*what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public :
				virtual const char	*what() const throw();
		};

		class	UnsignedException : public std::exception
		{
			public :
				virtual const char	*what() const throw();
		};

		class	ExecTooLowException : public std::exception
		{
			public :
				virtual const char	*what() const throw();
		};

};

std::ostream	&operator<<(std::ostream &stream, const Form &form);

#endif
