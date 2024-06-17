/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:45:14 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/17 02:49:51 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

AForm::AForm() : name("Default form"), execGrade(150), signGrade(150) 
{
	this->sign = false;
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const std::string& newName, int signNewGrade, int execNewGrade) : name(newName), execGrade(execNewGrade), signGrade(signNewGrade)
{
	if (execNewGrade > 150 || signNewGrade > 150)
		throw	GradeTooHighException();
	if (execNewGrade < 1 || signNewGrade < 1)
		throw	GradeTooLowException();
	this->sign = false;
	std::cout << "AForm overload constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm&	AForm::operator=(const AForm& copy)
{
	if (this != &copy)
		this->sign = copy.sign;
	return (*this);
}

AForm::AForm(const AForm& copy) : execGrade(copy.getExecGrade()), signGrade(copy.getSignGrade())
{
	*this = copy;
	std::cout << "AForm copy constructor called" << std::endl;
}

const std::string&	AForm::getName() const
{
	return (this->name);
}

int	AForm::getExecGrade() const
{
	return (this->execGrade);
}

int	AForm::getSignGrade() const
{
	return (this->signGrade);
}

bool	AForm::isSigned() const
{
	return (this->sign);
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGrade)
		throw	GradeTooLowException();
	this->sign = true;
}

std::ostream& operator<<(std::ostream &out, const AForm& other)
{
	out 
	<< "//============================================//" << std::endl
	<< "\t" <<other.getName() << std::endl 
	<< std::endl
	<< "\t" << "Minimun execution grade:" << "\t" << other.getExecGrade() << std::endl
	<< "\t" << "Minimun sign grade:" << "\t\t" << other.getSignGrade() << std::endl 
	<< "\t" << "Sign status:" << "\t\t\t" << other.isSigned() << std::endl 
	<< std::endl
	<< "//============================================//" << std::endl;
	return (out);
}
