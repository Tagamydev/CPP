/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:57:28 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/16 20:20:40 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie*	newZombie( std::string name ) {
	Zombie	*result = new Zombie(name);
	return (result);
}

Zombie*	newZombie( const char *name ) {
	std::string temp;
	if (name == nullptr)
		temp = "defalult zombie";
	else
		temp = name;
	Zombie	*result = new Zombie(temp);
	return (result);
}

