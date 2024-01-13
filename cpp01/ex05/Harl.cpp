/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:00:53 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/13 17:24:40 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

Harl::Harl() {
	std::cout << "Harl is borning... you will regret this..." << std::endl;
}

Harl::~Harl() {
	std::cout << "Harl has died, hurra!!!!" << std::endl;
}

int	comparation( std::string level )
{
	int	result;

	result = 0;
	result = (level.compare("DEBUG") == 0 ) * 1 + \
			(level.compare("INFO") == 0 ) * 10 + \
			(level.compare("WARNING") == 0 ) * 100 + \
			(level.compare("ERROR") == 0 ) * 1000;
	return (result);
}

void	Harl::complain( const char *level ) {
	if (level == nullptr)
		return ;
	void	(Harl::*funtion_ptr)() = NULL;
	switch (comparation(level)) {
		case 1:
			funtion_ptr = &Harl::debug;
			break ;
		case 10:
			funtion_ptr = &Harl::info;
			break ;
		case 100:
			funtion_ptr = &Harl::warning;
			break ;
		case 1000:
			funtion_ptr = &Harl::error;
			break ;
		default:
			funtion_ptr = &Harl::def;
			break ;
	}
	(this->*funtion_ptr)();
}

void	Harl::complain( std::string level ) {
	void	(Harl::*funtion_ptr)() = NULL;
	switch (comparation(level)) {
		case 1:
			funtion_ptr = &Harl::debug;
			break ;
		case 10:
			funtion_ptr = &Harl::info;
			break ;
		case 100:
			funtion_ptr = &Harl::warning;
			break ;
		case 1000:
			funtion_ptr = &Harl::error;
			break ;
		default:
			funtion_ptr = &Harl::def;
			break ;
	}
	(this->*funtion_ptr)();
}

void	Harl::def( void ) {
	std::cout << "[ Probably complaining" << \
	" about insignificant problems ]" << std::endl;
}

void	Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << \
	"I love having extra bacon" << \
	" for my 7XL-double-cheese" << \
	"-triple-pickle-specialketchup" << \
	" burger. I really do!" << \
	std::endl;
}

void	Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << \
	"I cannot believe adding" << \
	" extra bacon costs more money." << \
	" You didn’t put enough bacon" << \
	" in my burger! If you did," << \
	" I wouldn’t be asking for more!" << \
	std::endl;
}

void	Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << \
	"I think I deserve to have" << \
	" some extra bacon for free. I’ve been " << \
	"coming for years whereas you started" << \
	" working here since last month." << \
	std::endl;
}

void	Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << \
	"This is unacceptable!" << \
	" I want to speak to the manager now." << \
	std::endl;
}
