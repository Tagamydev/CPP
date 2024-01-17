/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:20:32 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/16 20:52:49 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA( const std::string &name, Weapon &weapon ) {
	this->name = name;
	this->weapon = &weapon;
	std::cout << "HumanA borning" << std::endl;
}

HumanA::HumanA( const char *name, Weapon &weapon ) {
	if (name == nullptr)
		this->name = "default hero";
	else
		this->name = name;
	this->weapon = &weapon;
	std::cout << "HumanA borning" << std::endl;
}

HumanA::~HumanA( void ) {
	std::cout << "HumanA dying" << std::endl;
}

void	HumanA::setWeapon( Weapon &weapon ) {
	this->weapon = &weapon;
}

void	HumanA::attack( void ) {
	std::cout << this->name << " attacks with their " \
	<< this->weapon->getType() << std::endl;
}
