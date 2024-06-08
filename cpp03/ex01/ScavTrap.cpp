/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:13:44 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 05:08:48 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ClapTrap.hpp>

// Default constructor
ClapTrap::ClapTrap(std::string title)
{
	std::cout << "Default constructor called" << std::endl;
	this->name = title;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 10;
}

// Copy assignment operator
ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

// destructor
ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->hitPoints << " points of damage!" << std::endl;
		this->energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		std::cout << "ClapTrap take " << amount << " damage points!" << std::endl;
		this->hitPoints -= amount;
		if (this->hitPoints <= 0)
			std::cout << "ClapTrap is dead!" << std::endl;
	}
	else if (this->hitPoints <= 0)
		std::cout << "ClapTrap is already dead!!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ClapTrap heals " << amount << " hit points!" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
	else if (this->hitPoints <= 0)
		std::cout << "\"Of the dead nothing but good is to be said.\"" << std::endl << "\t\t\t-Chilon of Sparta" << std::endl;
}

