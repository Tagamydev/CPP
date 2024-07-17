/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:13:48 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/17 22:57:45 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstring>
#include <stdexcept>
#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <limits.h>

void	parseDate(char *str)
{
	(void)str;

}

long double	stringToLongDouble(std::string str)
{
	char		*e;
	const char	*val = str.c_str();
	errno = 0;
	long double result = std::strtold(val, &e);

	if (*e != '\0' || errno != 0)
	{
		throw std::out_of_range ("something wrong with the value");
	}
	return (result);
}

long double	checkFloat(const std::string str)
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
				throw std::out_of_range ("something wrong with the value");
			}
			if (str[i] == '.' && (i != (int)(str.length() - 1) || i != 0))
				point++;
			else if (str[i] == '.')
			{
				throw std::out_of_range ("something wrong with the value");
			}
			if (str[i] == 'f' && i == (int)(str.length() - 1) && i != 0)
				f++;
			else if (str[i] == 'f')
			{
				throw std::out_of_range ("something wrong with the value");
			}
		}
		i++;
	}
	if (f > 1 || point > 1 || sign > 1)
	{
		throw std::out_of_range ("something wrong with the value");
	}
	if (f != 0)
		return (stringToLongDouble(static_cast<std::string>(str).erase(static_cast<std::string>(str).find("f", 0))));
	return (stringToLongDouble(str));
}

void	ft_1(char *str)
{
	int	i;

	i = 0;
	str = strtok(str, " , ");
	if (!str)
		return ;
	while (str)
	{
		std::cout << str << std::endl;
		if (!i)
		{
			parseDate(str);
		}
		else
		{
			std::cout << "el resto es:" << static_cast<int>(checkFloat(str)) << std::endl;
		}
		str = strtok(NULL, " , ");
		i++;
	}
	if (i != 2)
		throw std::out_of_range ("something wrong with the data base");
}

BitcoinExchange::BitcoinExchange(std::ifstream& dataBase, std::ifstream& in)
{
	std::string	dataB;
	std::string	iN;

	std::getline(dataBase, dataB);
	if (dataB != "date,exchange_rate")
		throw std::out_of_range ("something wrong with the data base");
	while (dataBase)
	{
		std::getline(dataBase, dataB);
		ft_1(const_cast<char *>(dataB.c_str()));
	}
	while (in)
	{
		std::getline(in, iN);
		//std::cout << iN << std::endl;
	}

}

BitcoinExchange::~BitcoinExchange()
{

}
