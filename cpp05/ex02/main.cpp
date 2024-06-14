/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/14 20:14:05 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

int	main()
{
	Bureaucrat		hola;
	const Bureaucrat*	test = new Bureaucrat("paca", 20);
	try
	{
		Bureaucrat	adeu = Bureaucrat("paco",  -1);
		std::cout << hola << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "holaaaa" << std::endl;

	}
	std::cout << *test << std::endl;
	std::cout << test->getName() << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	delete test;

	ShrubberyCreationForm	apple = ShrubberyCreationForm();
	RobotomyRequestForm	anatomy = RobotomyRequestForm("a baby");
	PresidentialPardonForm	president = PresidentialPardonForm("Frisk");
	Bureaucrat		aceu = Bureaucrat("ACEU", 1);
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	aceu.executeForm(anatomy);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
		apple.execute(Bureaucrat("tommy", 150));
	}
	catch (std::exception& e)
	{
		std::cout << "test bad grade form" << std::endl;
	}

	try
	{
		anatomy.execute(Bureaucrat("tommy", 1));
	}
	catch (std::exception& e)
	{
		std::cout << "test bad sign form" << std::endl;
	}
	Bureaucrat("Tommy", 1).signForm(anatomy);

	anatomy.execute(Bureaucrat("tommy", 1));
	anatomy.execute(Bureaucrat("tommy", 1));
	std::cout << std::endl;
	std::cout << std::endl;
	aceu.executeForm(anatomy);
	std::cout << std::endl;
	std::cout << std::endl;
	
	try
	{
		president.execute(Bureaucrat("tommy", 6));
	}
	catch (std::exception& e)
	{
		std::cout << "test bad grade form PresidentialPardonForm" << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\t\t\t DESTRUCTION STARTS NOW!!!!" << std::endl;
	return (0);
}
