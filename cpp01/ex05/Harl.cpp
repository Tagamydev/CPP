/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:43:06 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/13 21:45:26 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

Harl::Harl() {
	std::cout << "Constructor Harl called" << std::endl;
	return;
}

void	Harl::debug() {
  std::cout << this->name << "I love having extra bacon for my " \
  << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" <<std::endl;
}

void	Harl::info() {
  std::cout << this->name << "I cannot believe adding extra bacon costs more money. " \
  << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

void	Harl::warning() {
  std::cout << this->name << "I think I deserve to have some extra bacon for free. " \
  << "I’ve been coming for years whereas you started working here since last month." <<std::endl;
}

void	Harl::error() {
  std::cout << this->name << "This is unacceptable! I want to speak to the manager now." <<std::endl;
}

void	Harl::def() {
  std::cout << this->name << "[ Probably complaining about insignificant problems ]" <<std::endl;
}

void	Harl::complain(std::string level) {
	switch (level) {
    case "debug":
		this->debug();
        break;
    case "info":
		this->info();
        break;
    case "warning":
		this->warning();
        break;
    case "error":
		this->error();
        break;
    default:
		this->def;
	}
}

Harl::~Harl() {
  std::cout << "Destructor Harl called" << std::endl;
  return;
}
