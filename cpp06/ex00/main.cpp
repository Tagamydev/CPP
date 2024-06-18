/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/18 05:35:03 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <float.h>
#include <cmath>
#include <iomanip>
#include "ScalarConvert.hpp"

void	toDouble(const std::string& str)
{
	double	tmp;

	std::cout << "double: ";
	try
	{
		tmp = ScalarConvert::convertToDouble(str);
		if (static_cast<int>(tmp * 10) % 10 == 0)
			std::cout << std::setprecision(1) << std::fixed  << tmp;
		else
			std::cout << tmp;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
}

void	toFloat(const std::string& str)
{
	float	tmp;

	std::cout << "float: ";
	try
	{
		tmp = ScalarConvert::convertToFloat(str);
		if (static_cast<int>(tmp * 10) % 10 == 0)
			std::cout << std::setprecision(1)<< std::fixed  << tmp << "f";
		else
			std::cout << tmp << "f";
	}
	catch(std::exception& e)
	{
		std::string	tmpS = e.what();

		if (tmpS.compare("impossible") == 0)
			std::cout << e.what();
		else
			std::cout << e.what() << "f";
	}
	std::cout << std::endl;
}


void	toInt(const std::string& str)
{
	int	tmp;

	std::cout << "int: ";
	try
	{
		tmp = ScalarConvert::convertToInt(str);
		std::cout << tmp;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
}


void	toChar(const std::string& str)
{
	char	tmp;
	std::cout << "char: ";
	try
	{
		tmp = ScalarConvert::convertToChar(str);
		std::cout << "'" << tmp << "'";
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
}



int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: invalid arguments!" << std::endl;
		return(0);
	}
	else
	{
		toChar(argv[1]);
		toInt(argv[1]);
		toFloat(argv[1]);
		toDouble(argv[1]);
	}
	return (0);
}
