/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 22:37:29 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/17 02:57:22 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern&	Intern::operator=(const Intern& copy)
{
	if (this != &copy)
		std::cout << "why u try to copy the same Intern?, and why u even try to copy an intern?, they are useless replaceables beings!!" << std::endl;
	std::cout << "Intern copy operator called" << std::endl;
	return (*this);
}

Intern::Intern(const Intern& copy)
{
	*this = copy;
	std::cout << "Intern copy constructor called" << std::endl;
}

typedef AForm*	(Intern::*formList)(void) const;

AForm	*Intern::makeShrub() const
{
	ShrubberyCreationForm	tmp = ShrubberyCreationForm(this->target);

	return (tmp.clone());
}

AForm	*Intern::makeRobot() const
{
	RobotomyRequestForm	tmp = RobotomyRequestForm(this->target);

	return (tmp.clone());
}

AForm	*Intern::makePresi() const
{
	PresidentialPardonForm	tmp = PresidentialPardonForm(this->target);

	return (tmp.clone());
}


AForm	*Intern::makeForm(const std::string& name, const std::string& target)
{
	AForm*		result;
	Intern		tmp = Intern();
	formList	list[3] = {&Intern::makeShrub, &Intern::makePresi, &Intern::makeRobot};
	char		testName = std::toupper(name[0]);
	bool		error = false;

	result = NULL;
	this->target = target;
	switch	(testName)
	{
		case 'S':
			result = (tmp.*list[0])();
			break ;
		case 'R':
			result = (tmp.*list[2])();
			break ;
		case 'P':
			result = (tmp.*list[1])();
			break ;
		default:
			std::cout << "Intern stupid, stupid!!!! I only ask a single thing, create a form of name:" << name << " and you can't even do that right, replaceable trash!!" << std::endl;
			error = true;
			return NULL;
			break ;

	}
	if (!error)
		std::cout << "Intern creates " << name << std::endl;
	return (result);
}
