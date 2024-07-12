/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/12 04:09:29 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Span.hpp"

int	main()
{
	Span		list(9);
	Span		list2(10000);
	std::list<int>	test1;

	test1.push_back(3);
	test1.push_back(4);
	test1.push_back(5);
	test1.push_back(6);
	test1.push_back(7);
	test1.push_back(8);

	list.addNumber(0);
	list.addNumber(1);
	list.addNumber(2);
	list.addNumbers(test1.begin(), test1.end());
	try
	{
		list.addNumbers(test1.begin(), test1.end());
	}
	catch (const std::exception& e)
	{
        	std::cout << "exception " << e.what() << std::endl;
	}

	int	i = 0;

	while (i < 10000)
	{
		list2.addNumber(7);
		i++;
	}
	try
	{
		list2.addNumber(9);
	}
	catch (const std::exception& e)
	{
        	std::cout << "exception " << e.what() << std::endl;
	}


	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try
	{
		std::cout << list2.shortestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
        	std::cout << "exception " << e.what() << std::endl;
	}

	return (0);
}
