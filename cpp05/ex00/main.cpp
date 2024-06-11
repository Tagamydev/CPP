/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/11 04:48:11 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <Bureaucrat.hpp>

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
	delete test;
	return (0);
}
