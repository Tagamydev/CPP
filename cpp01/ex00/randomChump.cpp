/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:59:55 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/16 20:28:54 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

void	randomChump( std::string name ) {
	Zombie	hola = Zombie(name);
	hola.announce();
}

void	randomChump( const char *name ) {
	if (name != nullptr) {
		Zombie	hola = Zombie(name);
		hola.announce();
	} else {
		Zombie	example = Zombie("default zombie");
		example.announce();
	}
}

