/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 19:32:09 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>

int	main()
{
	ScavTrap a = ScavTrap("bebe class");
	FragTrap c = FragTrap("second bebe class");
	ClapTrap b = ClapTrap("papa class");
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	a.attack("tu abuela");
	a.takeDamage(9);
	a.beRepaired(10);
	a.takeDamage(9);
	a.takeDamage(1);
	a.takeDamage(1);
	a.guardGate();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	c.attack("tu tatarabuela");
	c.takeDamage(9);
	c.beRepaired(10);
	c.takeDamage(9);
	c.takeDamage(1);
	c.takeDamage(1);
	c.highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	b.attack("tu bisabuela");
	b.takeDamage(9);
	b.beRepaired(10);
	b.takeDamage(9);
	b.takeDamage(1);
	b.takeDamage(1);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	return (0);
}
