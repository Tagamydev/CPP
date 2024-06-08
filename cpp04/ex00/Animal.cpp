/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:54:32 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 21:32:07 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

// Default constructor
Animal::Animal()
{
	this->type = "Default Annoying animal";
	std::cout << "Default Constructor for Animal Class called" << std::endl;
}

// Destructor
Animal::~Animal()
{
	std::cout << "Destructor for Animal Class called" << std::endl;
}

// Copy assignment operator
Animal&	Animal::operator=(const Animal& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	// Check that it is not assigning to itself
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Copy constructor
Animal::Animal(const Animal& copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "* this animal makes an strage sound *" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
