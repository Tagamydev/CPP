/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   Ay: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:43:06 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/12 21:24:26 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

void	HumanA::attack() {
	std::cout << this->name << " attacks with their " \
	<< this->weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &name, Weapon &weaponREF) : weapon(weaponREF) {
  this->name = name;
  std::cout << "Constructor HumanA called" << std::endl;
  return;
}

HumanA::~HumanA() {
  std::cout << "Destructor HumanA called" << std::endl;
  return;
}
