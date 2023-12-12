/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:43:06 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/12 14:03:59 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

void	HumanA::attack() {
  std::cout << this-> << this->name << "attack with " << this->weapon->getType() << std::endl;
}
HumanA::HumanA(std::string name, Weapon& sword) {
  this->sword = sword;
  this->name = name;
  std::cout << "Constructor HumanA called" << std::endl;
  return;
}

HumanA::~HumanA() {
  std::cout << "Destructor HumanA called" << std::endl;
  std::cout << "Killing zombie: " << this->name << std::endl;
  return;
}
