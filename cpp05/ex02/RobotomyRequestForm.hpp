/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/14 19:40:24 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# pragma once
# include <AForm.hpp>

class	RobotomyRequestForm : public AForm{
	public:
		// default constructor
		RobotomyRequestForm();

		RobotomyRequestForm(const std::string& target);

		// copy constructor
		RobotomyRequestForm(const RobotomyRequestForm& copy);

		// copy operator overload
		RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);

		// destructor
		virtual ~RobotomyRequestForm();

		virtual void execute(Bureaucrat const & executor) const;

	private:
		std::string target;
};

#endif
