/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:45:14 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/11 05:55:49 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

Form::Form() : name("Default form"), execGrade(150), signGrade(150) 
{
	this->sign = false;
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string& newName, int signNewGrade, int execNewGrade) : name(newName), execGrade(execNewGrade), signGrade(signNewGrade)
{
	if (execNewGrade > 150 || signNewGrade > 150)
		throw	GradeTooHighException();
	if (execNewGrade < 1 || signNewGrade < 1)
		throw	GradeTooLowException();
	this->sign = false;
	std::cout << "Form overload constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form&	Form::operator=(const Form& copy)
{
	if (this != &copy)
		this->sign = copy.sign;
	return (*this);
}

Form::Form(const Form& copy) : execGrade(copy.getExecGrade()), signGrade(copy.getSignGrade())
{
	*this = copy;
	std::cout << "Form copy constructor called" << std::endl;
}

const std::string&	Form::getName() const
{
	return (this->name);
}

int	Form::getExecGrade() const
{
	return (this->execGrade);
}

int	Form::getSignGrade() const
{
	return (this->signGrade);
}

bool	Form::isSigned() const
{
	return (this->sign);
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGrade)
		throw	GradeTooLowException();
	this->sign = true;
}

std::ostream& operator<<(std::ostream &out, const Form& other)
{
	out << other.getName() << ", form, minimun execution grade:" << other.getExecGrade() << ", minimun sign grade:" << other.getSignGrade() << ", sign status:" << other.isSigned() << " (0 = false / 1 = true)";
	return (out);
}
