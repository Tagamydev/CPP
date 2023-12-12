/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:43:06 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/12 14:24:31 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

const std::string& Weapon::getType() {
  const std::string&	typ = &this->type;
  return (typ);
}

void	Weapon::setType(std::string type){
  this->type = type;
}

Weapon::Weapon(std::stirng type) {
  this->type = type;
  std::cout << "Constructor Weapon called" << std::endl;
  return;
}

Weapon::~Weapon() {
  std::cout << "Destructor Weapon called" << std::endl;
  std::cout << "Killing zombie: " << this->name << std::endl;
  return;
}
