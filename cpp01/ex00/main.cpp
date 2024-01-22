/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/22 19:53:21 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int  main()
{
	{
		std::string example = "zombie";
	
		randomChump("zeze");
		randomChump(example);
		randomChump(NULL);
	}
	{
		Zombie *zombie1;
		zombie1 = newZombie("alloc with ptr");
		zombie1->announce();
		delete zombie1;

		std::string example1 = "zombie";

		Zombie *zombie2;
		zombie2 = newZombie(example1);
		zombie2->announce();
		delete zombie2;

		Zombie *zombie3;
		zombie3 = newZombie(NULL);
		zombie3->announce();
		delete zombie3;
	}
	//definicion de string inutil
	std::string hola = NULL;

	std::cout << hola.size();
}
