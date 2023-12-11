/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:16:37 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/11 20:45:16 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClassZombie.hpp>

Zombie* newZombie(std::string name)
{
	Zombie*	newZ = new Zombie(name);
	return (newZ);
}
