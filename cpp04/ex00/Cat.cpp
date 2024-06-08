/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:54:32 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 21:31:47 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

// Default constructor
Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default Constructor for Cat Class called" << std::endl;
}

// Destructor
Cat::~Cat()
{
	std::cout << "Destructor for Cat Class called" << std::endl;
}

// Copy assignment operator
Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	// Check that it is not assigning to itself
	if (this != &other)
		this->type = other.type;
	else
		std::cout << "UR clonning the same strange orange cat!!!" << std::endl;
	return (*this);
}

// Copy constructor
Cat::Cat(const Cat& copy)
{
	*this = copy;
	std::cout << "UR clonning strange orange cats, ur no cool!!!" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "* this strange orange cat is making strange orange cat sounds *" << std::endl;
}
