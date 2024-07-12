/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 02:27:14 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/12 04:09:08 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>
#include <algorithm>

Span::Span(){}

Span::Span(const unsigned int& n)
{
	this->len = n;
}

Span::~Span()
{
	this->span.clear();
}

void	Span::addNumber(const int& n)
{
	if (this->span.size() == len)
		throw std::overflow_error("Not enough space in Span to add these numbers");
	span.push_back(n);
}


unsigned int	uabs(int n)
{
	if (n < 0)
		n *= -1;
	return (static_cast<unsigned int>(n));
}

int	Span::shortestSpan()
{
	std::list<int>::iterator	i = span.begin();
	std::list<int>::iterator	j = span.begin();
	std::list<int>::iterator	e = span.end();
	unsigned int			lowest = UINT_MAX;

	while (i != e)
	{
		j = span.begin();
		while (j != e)
		{
			if (uabs(*i - *j) < lowest && *i != *j)
				lowest = abs(*i - *j);
			j++;
		}
		i++;
	}
	if (lowest == UINT_MAX)
		throw std::overflow_error("Not enough numbers in Span to make an span");
	return (lowest);
}

int	Span::longestSpan()
{
	std::list<int>::iterator	max = std::max_element(span.begin(), span.end());
	std::list<int>::iterator	min = std::min_element(span.begin(), span.end());

	if (!abs(*max - *min))
		throw std::overflow_error("Not |eeeeee aaaaaa| enough numbers in Span to make an span");
	return (*max - *min);

}
