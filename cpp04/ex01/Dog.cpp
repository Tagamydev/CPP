/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:54:32 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/09 00:30:37 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

// Default constructor
Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default Constructor for Dog Class called" << std::endl;
	this->brain = new Brain();
}

// Destructor
Dog::~Dog()
{
	std::cout << "Destructor for Dog Class called" << std::endl;
	delete this->brain;
}

// Copy assignment operator
Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	// Check that it is not assigning to itself
	if (this != &other)
	{
		this->type = other.type;
		this->brain = new Brain(*other.brain);
	}
	else
		std::cout << "UR clonning the same dogo!!!" << std::endl;
	return (*this);
}

// Copy constructor
Dog::Dog(const Dog& copy)
{
	*this = copy;
	std::cout << "UR clonning dogos, ur awesome!!!" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "* this dogo is making dogo sounds *" << std::endl;
}
