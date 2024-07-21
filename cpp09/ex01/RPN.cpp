/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:25:07 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/21 16:00:52 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cstring>
#include <cerrno>
#include <cstdlib>

float	atof(std::string str)
{
	char		*e;
	const char	*val = str.c_str();
	errno = 0;
	long double result = std::strtold(val, &e);

	if (*e != '\0' || errno != 0)
	{
		throw std::out_of_range ("Value: ");
	}
	return (static_cast<float>(result));
}

bool	RPN::isNumber(char *str)
{
	int	i;
	int	signs;
	int	minus;
	int	numbers;

	i = 0;
	signs = 0;
	numbers = 0;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && 
		(str[i] != '-' && str[i] != '+' && str[i] != '/' && str[i] != '*'))
			throw std::out_of_range ("non valid character isNumber 1");
		else if (str[i] == '-')
		{
			minus++;
			signs++;
		}
		else if (str[i] == '+' || str[i] == '/' || str[i] == '*')
			signs++;
		else
			numbers++;
		i++;
	}
	if (signs > 1)
		throw std::out_of_range ("non valid character isNumber 2");
	if (numbers && signs && !minus)
		throw std::out_of_range ("non valid character isNumber 3");
	if (!numbers && signs)
		return (false);
	return (true);
}

float	RPN::getNumber()
{
	float	result;

	result = stack.top();
	stack.pop();
	return (result);
}

RPN::RPN(std::string numbers)
{
	char	*str;
	float	first;
	float	second;
	
	str = const_cast<char *>(numbers.c_str());
	str = strtok(str, " 	");
	if (!str)
	{
		std::cout << 0 << std::endl;
		return ;
	}
	while (str)
	{
		if (this->isNumber(str))
			stack.push(atof(std::string(str)));
		else
		{
			if (stack.size() < 2)
				throw std::out_of_range ("non valid operation");
			second = getNumber();
			first = getNumber();
			if (*str == '-')
				stack.push(first - second);
			if (*str == '+')
				stack.push(first + second);
			if (*str == '*')
				stack.push(first * second);
			if (*str == '/')
				stack.push(first / second);
		}
		str = strtok(NULL, " 	");
	}
	std::cout << stack.top() << std::endl;
}

RPN::~RPN()
{

}
