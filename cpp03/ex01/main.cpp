/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 05:36:33 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <ScavTrap.hpp>

int	main()
{
	ScavTrap a = ScavTrap("name aaaaa");
	
	a.attack("bebe");
	a.takeDamage(9);
	a.beRepaired(10);
	a.takeDamage(9);
	a.takeDamage(1);
	a.takeDamage(1);
	return (0);
}
