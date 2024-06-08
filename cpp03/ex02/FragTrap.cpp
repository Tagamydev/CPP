/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:13:44 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 19:30:01 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <FragTrap.hpp>

// Default constructor
FragTrap::FragTrap(std::string title)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->name = title;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

// Copy assignment operator
FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	// Check that it is not assigning to itself
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& copy)
{
	*this = copy;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

// destructor
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap(" << this->name << ")destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->hitPoints > 0)
		std::cout << "*FragTrap " << this->name << " displays a positive high fives request *" << std::endl;
	else if (this->hitPoints <= 0)
		std::cout << "\"No high Fives to the dead\"" << std::endl << "\t\t\t-Chilon of Sparta" << std::endl;
}
