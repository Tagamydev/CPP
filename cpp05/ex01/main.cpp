/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/14 17:58:49 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <Bureaucrat.hpp>
#include <Form.hpp>

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
	Form	env = Form("enviromental form", 1, 1);
	
	hola.signForm(env);
	delete test;
	Bureaucrat		boss = Bureaucrat("Boss", 1);
	boss.signForm(env);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << env << std::endl;
	
	
	return (0);
}
