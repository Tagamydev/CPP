/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/14 19:55:54 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# pragma once
# include <AForm.hpp>

class	PresidentialPardonForm : public AForm{
	public:
		// default constructor
		PresidentialPardonForm();

		PresidentialPardonForm(const std::string& target);

		// copy constructor
		PresidentialPardonForm(const PresidentialPardonForm& copy);

		// copy operator overload
		PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);

		// destructor
		virtual ~PresidentialPardonForm();

		virtual void execute(Bureaucrat const & executor) const;

	private:
		std::string target;
};

#endif
