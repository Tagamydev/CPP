/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:43:06 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/12 21:05:34 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

const std::string&	Weapon::getType() {
	const std::string&	type = this->type;
	return (type);
}

void Weapon::setType(const std::string &type)
{
	this->type = type;
}

Weapon::Weapon(const std::string &type) {
  this->type = type;
  std::cout << "Constructor Weapon called" << std::endl;
  return;
}

Weapon::~Weapon() {
  std::cout << "Destructor Weapon called" << std::endl;
  return;
}
