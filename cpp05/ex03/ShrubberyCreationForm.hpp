/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/16 22:22:12 by samusanc         ###   ########.fr       */
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

		virtual	AForm*	clone() const;

	private:
		std::string target;
};

#endif
