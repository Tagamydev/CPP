/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/11 05:43:54 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <exception>
# include <iostream>

class	Bureaucrat{
	public:
		// default constructor
		Bureaucrat();
		// copy constructor
		Bureaucrat(const Bureaucrat& copy);
		// overload constructor
		Bureaucrat(const std::string& newName, int grade);
		// destructor
		~Bureaucrat();
		// copy operator overload
		Bureaucrat& operator=(const Bureaucrat& copy);

		// geters
		int			getGrade(void) const;
		const std::string&	getName(void) const;

		// incrementers
		void		incrementGrade();
		void		decrementGrade();

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

	protected:
		const std::string	name;
		int			grade;
};

std::ostream& operator<<(std::ostream& out, const  Bureaucrat& bureaucrat);

#endif
