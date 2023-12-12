/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:43:06 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/12 21:24:43 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

void HumanB::setWeapon(const Weapon &weapon) {
  this->weapon = (Weapon *)&weapon;
}

void	HumanB::attack() {
  if (!this->weapon)
  	std::cout << this->name << \
	" attacks but... " << this->name << " don't have any weapon!!" << std::endl \
	<< "maybe " << this->name << " is crazy..." << std::endl;
  else
	std::cout << this->name << " attacks with their " \
	<< this->weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string &name) {
  this->name = name;
  this->weapon = NULL;
  std::cout << "Constructor HumanB called" << std::endl;
  return;
}

HumanB::~HumanB() {
  std::cout << "Destructor HumanB called" << std::endl;
  return;
}
