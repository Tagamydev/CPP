/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 19:16:10 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <ScavTrap.hpp>

int	main()
{
	ScavTrap a = ScavTrap("bebe class");
	ClapTrap b = ClapTrap("papa class");
	
	a.attack("tu abuela");
	a.takeDamage(9);
	a.beRepaired(10);
	a.takeDamage(9);
	a.takeDamage(1);
	a.takeDamage(1);
	a.guardGate();
	b.attack("tu bisabuela");
	b.takeDamage(9);
	b.beRepaired(10);
	b.takeDamage(9);
	b.takeDamage(1);
	b.takeDamage(1);

	return (0);
}
