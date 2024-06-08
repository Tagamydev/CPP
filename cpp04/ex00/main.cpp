/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 23:25:27 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>
#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>

int	main()
{
	std::cout << "Start test" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	//----------------------------------------------//
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "New test "<<std::endl;
	//----------------------------------------------//
	const WrongAnimal* meta1 = new WrongAnimal();
	const WrongAnimal* i1 = new WrongCat();

	std::cout << std::endl;

	std::cout << i1->getType() << " " << std::endl;

	std::cout << std::endl;

	i1->makeSound(); //will output the wrong animal sound!
	meta1->makeSound();

	delete meta1;
	delete i1;
	return (0);
}
