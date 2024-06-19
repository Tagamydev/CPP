/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cheat.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:20:19 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/19 02:46:34 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cheat.hpp"
#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <limits.h>
#include <limits>

Cheat::Cheat(){}

Cheat::~Cheat(){}

long double	Cheat::stringToLongDouble(const std::string& str)
{
	char		*e;
	const char	*val = str.c_str();
	errno = 0;
	long double result = std::strtold(val, &e);

	if (*e != '\0' || errno != 0)
	{
		throw	impossibleException();
	}
	return (result);
}

long double	Cheat::checkFloat(const std::string& str)
{
	int	i = 0;
	int	f = 0;
	int	point = 0;
	int	sign = 0;

	while (i != (int)(str.length()))
	{
		if (!isdigit(str[i]))
		{
			if ((str[i] == '-' || str[i] == '+') && i == 0)
				sign++;
			else if (str[i] == '-' || str[i] == '+')
			{
				throw impossibleException();
			}
			if (str[i] == '.' && (i != (int)(str.length() - 1) || i != 0))
				point++;
			else if (str[i] == '.')
			{
				throw impossibleException();
			}
			if (str[i] == 'f' && i == (int)(str.length() - 1) && i != 0)
				f++;
			else if (str[i] == 'f')
			{
				throw impossibleException();
			}
		}
		i++;
	}
	if (f > 1 || point > 1 || sign > 1)
	{
		throw impossibleException();
	}
	if (f != 0)
		return (stringToLongDouble(static_cast<std::string>(str).erase(static_cast<std::string>(str).find("f", 0))));
	return (stringToLongDouble(str));
}

long double	Cheat::checkString(const std::string& str)
{
	if (str.length() == 1)
	{
		return (checkFloat(&str[0]));
	}
	else
	{
		return (checkFloat(str));
	}
	return (1);
}

bool	compareNaN(const std::string& str)
{
	if (	str.compare("-inf") == 0 ||
		str.compare("+inf") == 0 ||
		str.compare("+inff") == 0 ||
		str.compare("-inff") == 0 ||
		str.compare("nan") == 0 ||
		str.compare("nanf") == 0)
		return (true);
	return (false);
}

void	Cheat::exceptionsNaN(const std::string& str)
{
	if (str.compare("-inf") == 0 || str.compare("-inff") == 0)
		throw minusInfException();
	if (str.compare("+inf") == 0 || str.compare("+inff") == 0)
		throw infException();
	if (str.compare("nan") == 0 || str.compare("nanf") == 0)
	{
		throw nanException();
	}
	return ;
}

char Cheat::convertToChar(const std::string& str)
{
	long double	tmp;

	if (compareNaN(str))
		throw impossibleException();
	tmp = checkFloat(str);
	if (tmp < 32 || tmp > 63)
		throw noDisException();
	return (static_cast<char>(tmp));
}

int Cheat::convertToInt(const std::string& str)
{
	long double	tmp;

	if (compareNaN(str))
		throw impossibleException();
	tmp = checkFloat(str);
	if (tmp < INT_MIN || tmp > INT_MAX)
		throw impossibleException();
	return (static_cast<int>(tmp));
}

float Cheat::convertToFloat(const std::string& str)
{
	long double	tmp;

	exceptionsNaN(str);
	tmp = checkFloat(str);
	return (static_cast<float>(tmp));
}

double Cheat::convertToDouble(const std::string& str)
{
	long double	tmp;

	exceptionsNaN(str);
	tmp = checkFloat(str);
	return (static_cast<double>(tmp));
}
