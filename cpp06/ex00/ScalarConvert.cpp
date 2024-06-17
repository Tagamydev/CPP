/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:20:19 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/17 18:15:09 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"
#include <cstdlib>

ScalarConvert::ScalarConvert(){}

ScalarConvert::~ScalarConvert(){}

ScalarConvert::ScalarConvert(const ScalarConvert& other){*this = other;}

ScalarConvert&	ScalarConvert::operator=(const ScalarConvert& other)
{
	int i = 0;

	if (this != &other)
		i++;
	return(*this);
}

long double	stringToLongDouble(const std::string& str)
{
	char * e;
	errno = 0;
	long double val = std::strtold(str, &e);

	if (*e != '\0' || errno != 0)
		throw	imposibleExecption();
	return (val);
}

void ScalarConvert::convert(const std::string& str)
{
	
	std::cout << "test" << str.length() << std::endl;
}
