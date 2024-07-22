/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:17:30 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/22 21:37:40 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstring>
#include <cerrno>
#include <cstdlib>

void	printList(std::list<int> list)
{
	std::list<int>::iterator	i = list.begin();
	std::list<int>::iterator	e = list.end();

	while (i != e)
	{
		std::cout << *i << " ";
		i++;
	}
	std::cout << std::endl;
}


int	atoi(std::string str)
{
	char		*e;
	const char	*val = str.c_str();
	errno = 0;
	long double result = std::strtold(val, &e);

	if (*e != '\0' || errno != 0)
	{
		throw std::out_of_range ("Value: ");
	}
	return (static_cast<int>(result));
}

void	checkDup(std::list<int>& list)
{
	std::list<int>::iterator	i = list.begin();
	std::list<int>::iterator	e = list.end();
	std::list<int>::iterator	i2;

	while (i != e)
	{
		i2 = list.begin();
		while (i2 != e)
		{
			if (*i == *i2 && (i != i2))
				throw std::out_of_range ("duplicate");
			i2++;
		}
		i++;
	}
}

bool	PmergeMe::isNumber(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			throw std::out_of_range ("non valid character isNumber 2");
		i++;
	}
	return (true);
}

void	PmergeMe::makeFirstContainer()
{
	this->c1_c = std::clock();
	std::list<int>::iterator	i = this->general.begin();
	std::list<int>::iterator	e = this->general.end();

	while (i != e)
	{
		this->container1.push_back(*i);
		i++;
	}
	FJMI< std::list<int> >(this->container1);
	std::cout << "After: ";
	printList(this->container1);
}

void	PmergeMe::makeSecondContainer()
{

	this->c2_c = std::clock();
	std::list<int>::iterator	i = this->general.begin();
	std::list<int>::iterator	e = this->general.end();

	while (i != e)
	{
		this->container2.push_back(*i);
		i++;
	}
	FJMI< std::vector<int> >(this->container2);
	//FJMI(this->container2);
}

PmergeMe::PmergeMe(std::string numbers)
{
	char	*str;
	float	tmp;
	
	str = const_cast<char *>(numbers.c_str());
	str = strtok(str, " 	");
	if (!str)
	{
		std::cout << "Error" << std::endl;
		return ;
	}
	while (str)
	{
		if (this->isNumber(str))
		{
			tmp = atoi(std::string(str));
			this->general.push_back(tmp);
		}
		str = strtok(NULL, " 	");
	}
	checkDup(this->general);

	std::cout << "Before: ";
	printList(this->general);
	this->makeFirstContainer();
	this->makeSecondContainer();
}

PmergeMe::~PmergeMe()
{

}
