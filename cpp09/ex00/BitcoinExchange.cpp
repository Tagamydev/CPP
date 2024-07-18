/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:13:48 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/18 20:40:41 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstring>
#include <stdexcept>
#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <limits.h>

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

void	checkNAD(char *str)//check numbers and dash
{
	int	i;
	int	dash;

	i = 0;
	dash = 0;
	if (str[0] == '-')
		throw std::out_of_range ("something wrong with the data base: date1");
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			if (str[i] == '-')
				dash++;
			else
				throw std::out_of_range ("something wrong with the data base: date2");
		}
		i++;
	}
	if (dash != 2)
	{
		throw std::out_of_range ("something wrong with the data base: date3");
	}
}

int	limitDateChecker(char *str)
{
	long double	checker;
	std::string tmp(str);
	
	checker = checkFloat(tmp);
	if (checker > INT_MAX)
		throw std::out_of_range ("something wrong with the data base: date");
	return (static_cast<int>(checker));
}

void	checkDays(int month, int day)
{
	switch (month)
	{
		case 1:
			if (day > 31)
				throw std::out_of_range ("something wrong with the date");
			break ;
		case 2:
			if (day > 29)
				throw std::out_of_range ("something wrong with the date");
			break ;
		case 3:
			if (day > 31)
				throw std::out_of_range ("something wrong with the date");
			break ;
		case 4:
			if (day > 30)
				throw std::out_of_range ("something wrong with the date");
			break ;
		case 5:
			if (day > 31)
				throw std::out_of_range ("something wrong with the date");
			break ;
		case 6:
			if (day > 30)
				throw std::out_of_range ("something wrong with the date");
			break ;
		case 7:
			if (day > 31)
				throw std::out_of_range ("something wrong with the date");
			break ;
		case 8:
			if (day > 31)
				throw std::out_of_range ("something wrong with the date");
			break ;
		case 9:
			if (day > 30)
				throw std::out_of_range ("something wrong with the date");
			break ;
		case 10:
			if (day > 31)
				throw std::out_of_range ("something wrong with the date");
			break ;
		case 11:
			if (day > 30)
				throw std::out_of_range ("something wrong with the date");
			break ;
		case 12:
			if (day > 31)
				throw std::out_of_range ("something wrong with the date");
			break ;
	}
}

int	*checkEachDate(char *str)
{
	int		year;
	int		month;
	int		day;
	int		i;
	
	i = 0;
	year = 0;
	month = 0;
	day = 0;
	str = strtok(str, "-");
	while (str)
	{
		if (!i)
		{
			year = limitDateChecker(str);
		}
		else if (i == 1)
		{
			month = limitDateChecker(str);
			if (month > 12 || month == 0)
				throw std::out_of_range ("something wrong with the data base: date");
		}
		else if (i == 2)
		{
			day = limitDateChecker(str);
			checkDays(month, day);
		}
		str = strtok(NULL, "-");
		i++;
	}
	if (i != 3)
		throw std::out_of_range ("something wrong with the data base: date3");
	int		*date;

	date = new int[3];
	date[0] = year;
	date[1] = month;
	date[2] = day;
	return (date);
}

int	*checkDate(char *date)
{
	int	*result;

	result = NULL;
	checkNAD(date);
	result = checkEachDate(date);
	return (result);
}

void	BitcoinExchange::parse_db(char *str)
{
	std::string	date;
	std::string	value;
	int		*d;
	int		i;
	float		v;

	i = 0;
	str = strtok(str, ",");
	if (!str)//end of file
		return ;
	while (str)
	{
		if (!i)
		{
			if (str)
				date = std::string(str);
			else
				throw std::out_of_range ("something wrong with the data base: null");
		}
		else
		{
			if (str)
				value = std::string(str);
			else
				throw std::out_of_range ("something wrong with the data base: null");
		}
		str = strtok(NULL, ",");
		i++;
	}
	if (i != 2)
		throw std::out_of_range ("something wrong with the data base");
	d = checkDate(const_cast<char *>(date.c_str()));
	v = static_cast<float>(checkFloat(value));
	db.insert(std::pair<int *, float>(d, v));
}

void	BitcoinExchange::parse_infile(char *str)
{
	std::string	date;
	std::string	value;
	int		*d;
	int		i;
	float		v;

	i = 0;
	str = strtok(str, " , ");
	if (!str)//end of file
		return ;
	while (str)
	{
		if (!i)
		{
			if (str)
				date = std::string(str);
			else
				throw std::out_of_range ("something wrong with the data base: null");
		}
		else
		{
			if (str)
				value = std::string(str);
			else
				throw std::out_of_range ("something wrong with the data base: null");
		}
		str = strtok(NULL, " , ");
		i++;
	}
	if (i != 2)
		throw std::out_of_range ("something wrong with the data base");
	d = checkDate(const_cast<char *>(date.c_str()));
	v = static_cast<float>(checkFloat(value));
	input.insert(std::pair<int *, float>(d, v));
}

BitcoinExchange::BitcoinExchange(std::ifstream& dataBase, std::ifstream& in)
{
	std::string	dataB;
	std::string	iN;

	std::getline(dataBase, dataB);
	if (dataB != "date,exchange_rate")//exception in case bad header of data base
		throw std::out_of_range ("something wrong with the data base: bad header");
	while (dataBase)
	{
		std::getline(dataBase, dataB);
		parse_db(const_cast<char *>(dataB.c_str()));
	}
	while (in)
	{
		std::getline(in, iN);
	}
}

BitcoinExchange::~BitcoinExchange()
{

}
