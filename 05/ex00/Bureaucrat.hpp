/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:12:53 by agirona           #+#    #+#             */
/*   Updated: 2022/04/22 20:56:44 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class	Bureaucrat
{
	private :
		const std::string	_name;
		int					_grade;

	public :
		Bureaucrat(const std::string &name, const int grade);
		Bureaucrat();
		Bureaucrat(const Bureaucrat &bureaucrat);
		~Bureaucrat();
		Bureaucrat		&operator=(const Bureaucrat &rhs);
		std::string		getName() const;
		int				getGrade() const;
		void			upgrade();
		void			downgrade();

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

};

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &rhs);

#endif
