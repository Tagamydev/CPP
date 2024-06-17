/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/17 02:47:12 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AFORM_HPP
# define AFORM_HPP
# pragma once
# include <string>
# include <exception>
# include <iostream>
# include <Bureaucrat.hpp>

class	Bureaucrat;

class	AForm{
	public:
		// default constructor
		AForm();
		// copy constructor
		AForm(const AForm& copy);
		// overload constructor
		AForm(const std::string& newName, int execGrade, int signGrade);
		// destructor
		virtual ~AForm();
		// copy operator overload
		AForm& operator=(const AForm& copy);

		// geters
		const std::string&	getName(void) const;
		int			getExecGrade(void) const;
		int			getSignGrade(void) const;
		bool			isSigned(void) const;

		// other stuff
		void		beSigned(const Bureaucrat& bureaucrat);

		virtual void execute(Bureaucrat const & executor) const = 0;

		virtual	AForm*	clone() const = 0;

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

		class	FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("This form is not signed where u go!!!");
				}
		};


	private:
		const std::string	name;
		const int		execGrade;
		const int		signGrade;
		bool			sign;
};

std::ostream& operator<<(std::ostream& out, const  AForm& form);

#endif
