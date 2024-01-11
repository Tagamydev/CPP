/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:20:32 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/11 20:49:21 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB( const std::string &name ) {
	this->name = name;
	this->weapon = NULL;
	std::cout << "HumanB borning" << std::endl;
}

HumanB::HumanB( const char *name ) {
	if (name == nullptr)
		this->name = "default hero";
	else
		this->name = name;
	this->weapon = NULL;
	std::cout << "HumanB borning" << std::endl;
}

HumanB::~HumanB( void ) {
	std::cout << "HumanB dying" << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon ) {
	this->weapon = &weapon;
}

void	HumanB::attack( void ) {
	if (this->weapon == nullptr)
		std::cout << this->name << \
		" attacks with their ... oh," \
		<< " wait, never mind, he has nothing. Run, " \
		<< this->name << std::endl;
	else
		std::cout << this->name << " attacks with their " \
		<< this->weapon->getType() << std::endl;
}
