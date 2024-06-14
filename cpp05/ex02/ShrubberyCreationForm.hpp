/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/14 19:40:48 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# pragma once
# include <AForm.hpp>

class	ShrubberyCreationForm : public AForm{
	public:
		// default constructor
		ShrubberyCreationForm();

		ShrubberyCreationForm(const std::string& target);

		// copy constructor
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);

		// copy operator overload
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);

		// destructor
		virtual ~ShrubberyCreationForm();

		virtual void execute(Bureaucrat const & executor) const;

		/*
		// exception handle
		class	GradeTooLowException  : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is to low you can't be a good person!!!");
				}
		};
		*/
	private:
		std::string target;
};

#endif
