/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:17:30 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/21 18:41:07 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::string numbers)
{
	char	*str;
	float	tmp;
	
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
		{
			tmp = atoi(std::string(str));
			this->general.push_back(tmp);
		}
		else
		{
			throw std::out_of_range ("non valid operation");
		}
		str = strtok(NULL, " 	");
	}
	std::cout << stack.top() << std::endl;

}

PmergeMe::~PmergeMe()
{

}
