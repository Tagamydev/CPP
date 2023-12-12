/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:43:06 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/12 12:46:28 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie(std::string newz) {
	this->name = newz;
	std::cout << "Constructor Zombie called" << std::endl;
	return;
}

void	Zombie::announce() {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

Zombie::~Zombie() {
  std::cout << "Destructor Zombie called" << std::endl;
  std::cout << "Killing zombie: " << this->name << std::endl;
  return;
}
