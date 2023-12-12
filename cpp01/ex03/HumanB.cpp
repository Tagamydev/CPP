/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:43:06 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/12 14:23:06 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

void	HumanB::attack() {
  if (!this->weapon)
  	std::cout << this-> << this->name << "attack with.. oh wait he can't attack :P, give him a weapon!!!" <<std::endl;
  else
  	std::cout << this-> << this->name << "attack with " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon newSword) {
  this->weapon = &newSword;
}

HumanB::~HumanB(std::string name) {
  this->name = name;
  this->weapon = NULL;
  std::cout << "Destructor HumanB called" << std::endl;
  return;
}

HumanB::~HumanB() {
  std::cout << "Destructor HumanB called" << std::endl;
  return;
}
