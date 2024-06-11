/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/11 05:55:39 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
# define FORM_HPP
# pragma once
# include <string>
# include <exception>
# include <iostream>
# include <Bureaucrat.hpp>

class	Bureaucrat;

class	Form{
	public:
		// default constructor
		Form();
		// copy constructor
		Form(const Form& copy);
		// overload constructor
		Form(const std::string& newName, int execGrade, int signGrade);
		// destructor
		~Form();
		// copy operator overload
		Form& operator=(const Form& copy);

		// geters
		const std::string&	getName(void) const;
		int			getExecGrade(void) const;
		int			getSignGrade(void) const;
		bool			isSigned(void) const;

		// incrementers
		void		incrementGrade();
		void		decrementGrade();

		// other stuff
		void		beSigned(const Bureaucrat& bureaucrat);

		// exception handle
		class	GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is to high!!!");
				}
		};

		class	GradeTooLowException  : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is to low!!!");
				}
		};

	private:
		const std::string	name;
		const int		execGrade;
		const int		signGrade;
		bool			sign;
};

std::ostream& operator<<(std::ostream& out, const  Form& form);

#endif
