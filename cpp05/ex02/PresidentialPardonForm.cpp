/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:45:14 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/14 20:03:30 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>
#include <cstdlib>
#include <string>
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 5, 25)
{
	this->target = "infinite";
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 5, 25)
{
	this->target = target;
	std::cout << "PresidentialPardonForm overload constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	if (this != &copy)
		this->target  = copy.target;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
{
	*this = copy;
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

void	pardon(std::string target)
{
	std::cout << "Dear " << target << ", you have been pardoned by Zaphod Beeblebrox." << std::endl;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getSignGrade())
		throw	GradeTooLowException();
	if (this->isSigned())
		pardon(this->target);
	else
		throw	FormNotSignedException();

}

