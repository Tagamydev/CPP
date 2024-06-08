/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:54:32 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 22:06:57 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

// Default constructor
WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Default Constructor for WrongCat Class called" << std::endl;
}

// Destructor
WrongCat::~WrongCat()
{
	std::cout << "Destructor for WrongCat Class called" << std::endl;
}

// Copy assignment operator
WrongCat&	WrongCat::operator=(const WrongCat& other)
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
WrongCat::WrongCat(const WrongCat& copy)
{
	*this = copy;
	std::cout << "UR clonning strange orange cats, ur no cool!!!" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "* this strange orange cat is making strange orange cat sounds *" << std::endl;
}
