/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:20:19 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/19 02:44:26 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"
#include <float.h>
#include <cmath>
#include <iomanip>

ScalarConvert::ScalarConvert(){}

ScalarConvert::~ScalarConvert(){}

void	toDouble(const std::string& str)
{
	double	tmp;

	std::cout << "double: ";
	try
	{
		tmp = Cheat::convertToDouble(str);
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
		tmp = Cheat::convertToFloat(str);
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
		tmp = Cheat::convertToInt(str);
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
		tmp = Cheat::convertToChar(str);
		std::cout << "'" << tmp << "'";
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
}

void	ScalarConvert::convert(const std::string& hola)
{
	toChar(hola);
	toInt(hola);
	toFloat(hola);
	toDouble(hola);
}

