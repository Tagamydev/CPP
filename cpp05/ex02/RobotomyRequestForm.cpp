/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:45:14 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/14 20:03:48 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>
#include <cstdlib>
#include <string>
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 45, 72)
{
	this->target = "infinite";
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 45, 72)
{
	this->target = target;
	std::cout << "RobotomyRequestForm overload constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	if (this != &copy)
		this->target  = copy.target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
{
	*this = copy;
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

void	robotomy(std::string target)
{
	int	random;

	std::cout << "* some drilling noises *" << std::endl;
	{
		random = rand();
		if (random % 2 == 0)
			std::cout << "Dear " << target << ", you have been robotomized successfully!!" << std::endl;
		else
			std::cout << "Dear " << target << ", you have been robotomized unsuccessfully, now u can control ur live!!" << std::endl;
	}
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getSignGrade())
		throw	GradeTooLowException();
	if (this->isSigned())
		robotomy(this->target);
	else
		throw	FormNotSignedException();

}

