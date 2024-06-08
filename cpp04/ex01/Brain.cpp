/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:54:32 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/09 00:04:22 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

// Default constructor
Brain::Brain()
{
	std::cout << "Default Constructor for Brain Class called" << std::endl;
}

// Destructor
Brain::~Brain()
{
	std::cout << "Destructor for Brain Class called" << std::endl;
}

// Copy assignment operator
Brain&	Brain::operator=(const Brain& other)
{
	int	i;

	i = 0;
	std::cout << "Copy assignment operator called" << std::endl;
	// Check that it is not assigning to itself
	if (this != &other)
	{
		while (i < 100)
		{
			this->ideas[i] = other.ideas[i];
			i++;
		}
	}
	return (*this);
}

// Copy constructor
Brain::Brain(const Brain& copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

