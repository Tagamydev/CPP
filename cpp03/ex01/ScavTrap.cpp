/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:13:44 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 05:51:59 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ScavTrap.hpp>

// Default constructor
ScavTrap::ScavTrap(std::string title)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->name = title;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

// Copy assignment operator
ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
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
ScavTrap::ScavTrap(const ScavTrap& copy)
{
	*this = copy;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

// destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap(" << this->name << ")destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->hitPoints << " points of damage!" << std::endl;
		std::cout << "Also I'm aware of my individuality!!!." << std::endl;
		this->energyPoints--;
	}
}


