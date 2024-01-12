/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:00:53 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/12 21:48:35 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

Harl::Harl() {
	std::cout << "Harl is borning... you will regret this..." << std::endl;
}

Harl::~Harl() {
	std::cout << "Harl has died, hurra!!!!" << std::endl;
}

void	Harl::complain( std::string level ) {
	switch (hash(level)) {
		case hash("ERROR")
			std::cout << "[ ERROR ]" << std::endl;
			break ;
		case hash("WARNING")
			std::cout << "[ WARNING ]" << std::endl;
			break ;
		case hash("INFO")
			std::cout << "[ INFO ]" << std::endl;
			break ;
		case hash("DEBUG")
			std::cout << "[ DEBUG ]" << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining" << \
			" about insignificant problems ]" << std::endl;
			break ;
	}
}

void	Harl::debug( void ) {
	std::cout << \
	"I love having extra bacon" << \
	" for my 7XL-double-cheese" << \
	"-triple-pickle-specialketchup" << \
	" burger. I really do!" << \
	std::endl;
}

void	Harl::info( void ) {
	std::cout << \
	"I cannot believe adding" << \
	" extra bacon costs more money." << \
	" You didn’t put enough bacon" << \
	" in my burger! If you did," << \
	" I wouldn’t be asking for more!" << \
	std::endl;
}

void	Harl::warning( void ) {
	std::cout << \
	"I think I deserve to have" << \
	" some extra bacon for free. I’ve been " << \
	"coming for years whereas you started" << \
	" working here since last month." << \
	std::endl
}

void	Harl::error( void ) {
	std::cout << \
	"This is unacceptable!" << \
	" I want to speak to the manager now." << \
	std::endl;
}
