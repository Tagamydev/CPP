/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:23:23 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/11 20:45:32 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClassZombie.hpp>

void	randomChump(std::string name)
{
	Zombie	z = Zombie(name);

	z.announce();
	return;
}
