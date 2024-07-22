/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/22 10:35:17 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <ctime>
#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	std::string	result;

	if (argc < 3)
	{
		std::cout << "Error" << std::endl;
		return (-1);
	}
	argv++;
	int	i;

	i = 0;
	while (argv[i])
	{
		std::string	tmp(argv[i]);
		result = result + " ";
		result = result + tmp;
		i++;
	}
	try
	{
		PmergeMe	tmp(result);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;

	}
	//std::cout << "hola mundo este es el tiempo: " << 1000.0 * (end - start) / CLOCKS_PER_SEC << std::endl;
	return (0);
}
