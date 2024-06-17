/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 22:28:36 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/17 02:39:06 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# pragma once

# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern{
	public:
		Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);
		~Intern();
		AForm *makeForm(const std::string& name, const std::string& target);
		AForm *makeShrub() const;
		AForm *makePresi() const;
		AForm *makeRobot() const;

	private:
		std::string	target;
};

#endif

