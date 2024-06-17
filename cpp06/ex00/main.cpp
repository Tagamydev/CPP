/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/17 18:29:21 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <float.h>
#include "ScalarConvert.hpp"

void	ToFloat(const std::string& str)
{
	std::cout << "float: ";
	try
	{
		ScalarConvert::convertToFloat(argv[1]);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << endl;
}

int	main(int argc, char **argv)
{
	long double	a;

	a = DBL_MAX;
	if (argc != 2)
	{
		std::cout << "Error: invalid arguments!" << std::endl;
		return(0);
	}
	else
	{
	}
	return (0);
}
