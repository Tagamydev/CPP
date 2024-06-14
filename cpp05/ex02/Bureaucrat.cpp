/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:45:14 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/14 20:10:51 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat() : name("Default bureaucrat")
{
	this->grade = 150;
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& newName, int newGrade) : name(newName)
{
	if (newGrade > 150)
		throw	GradeTooHighException();
	else if (newGrade < 1)
		throw	GradeTooLowException();
	this->grade = newGrade;
	std::cout << "Bureaucrat overload constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& copy)
{
	if (this != &copy)
		this->grade = copy.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

const std::string&	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade()
{
	this->grade--;
	if (this->grade < 1)
		throw	GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	this->grade++;
	if (this->grade > 150)
		throw	GradeTooLowException();
}

void	Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name <<  " signed " << form.getName() <<std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << this->name <<  " couldn’t sign " << form.getName() << " because grade too low" <<std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->name <<  " executed " << form.getName() <<std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << this->name <<  " couldn’t execute " << form.getName() << " because "<< e.what() <<std::endl;
	}
}


std::ostream& operator<<(std::ostream &out, const Bureaucrat& other)
{
	out << other.getName() << ", bureaucrat grade " << other.getGrade();
	return (out);
}
