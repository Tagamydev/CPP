/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:46:49 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/17 20:05:26 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon(const std::string& weapon) {
  this->type = weapon;
  std::cout << "crafting Weapon" << std::endl;
}

Weapon::Weapon(const char *weapon) {
  if (weapon == nullptr)
    this->type = "default weapon";
  else
    this->type = weapon;
  std::cout << "crafting Weapon" << std::endl;
}

Weapon::~Weapon() {
  std::cout << "destroying Weapon" << std::endl;
}

const std::string  &Weapon::getType(void)
{
  const  std::string  &result = this->type;
  return (result);
}

void  Weapon::setType(const std::string& type) {
  this->type = type;
}

void  Weapon::setType(const char *type) {
  if (type != nullptr)
    this->type = type;
}
