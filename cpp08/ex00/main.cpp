/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/11 19:57:32 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <list>
#include "Easyfind.hpp"

int	main()
{
	std::list<int>	l;

	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	std::list<int>::iterator i = l.begin();

	std::cout << *i << std::endl;
	std::cout << *(easyfind(l, 4)) << std::endl;
	try
	{
		std::cout << *(easyfind(l, 10)) << std::endl;
	}
	catch (const std::exception& e) 
	{
        	std::cerr << e.what() << std::endl;
	}
	return (0);
}
