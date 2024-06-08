/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:13:44 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 02:55:50 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ClapTrap.hpp>

// Default constructor
ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = copy.getRawBits();
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
		this->hitPoints--;
	}
	else if (this->hitPoints == 0)
		std::cout << "ClapTrap is already dead!!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ClapTrap heals " << amount << " hit points!" << std::endl;
		this->energyPoints--;
	}
}

