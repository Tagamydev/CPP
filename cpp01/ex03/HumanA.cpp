/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:20:32 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/17 20:36:20 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA(const std::string &name, const Weapon &weapon) {
  this->name = name;
  this->weapon = const_cast<Weapon *>(&weapon);
  std::cout << "HumanA borning" << std::endl;
}

HumanA::HumanA(const char *name, const Weapon &weapon) {
  if (name == nullptr)
    this->name = "default hero";
  else
    this->name = name;
  this->weapon = const_cast<Weapon *>(&weapon);
  std::cout << "HumanA borning" << std::endl;
}

HumanA::~HumanA(void) {
  std::cout << "HumanA dying" << std::endl;
}

void  HumanA::setWeapon(const Weapon &weapon) {
  this->weapon = const_cast<Weapon *>(&weapon);
}

void  HumanA::attack(void) {
  std::cout << this->name << " attacks with their " \
  << this->weapon->getType() << std::endl;
}
