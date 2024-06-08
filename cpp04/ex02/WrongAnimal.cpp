/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:54:32 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 22:05:37 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

// Default constructor
WrongAnimal::WrongAnimal()
{
	this->type = "Default Annoying wrong animal";
	std::cout << "Default Constructor for WrongAnimal Class called" << std::endl;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for WrongAnimal Class called" << std::endl;
}

// Copy assignment operator
WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	// Check that it is not assigning to itself
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "* this animal makes an strage sound *" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}
