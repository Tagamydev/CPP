/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/09 00:45:52 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>
#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <Brain.hpp>

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

	std::cout << std::endl;
	std::cout << std::endl;
	//----------------------------------------------//

	std::cout << "New test "<<std::endl;

	Cat	mrPatas;

	{
		Cat	mrOrejas = mrPatas;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "New test "<<std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	const Animal* a = new Dog();
	const Animal* b = new Cat();
	delete a;//should not create a leak
	delete b;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "//----------------Start FINAL test--------------//" << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	
	Animal**	farm = new Animal*[100];
	int	x = 0;

	while (x < 100)
	{
		if (x < 50)
		{
			farm[x] = new Dog();
		}
		else
		{
			farm[x] = new Cat();
		}
		++x;
	}
	x = 0;
	while (x < 100)
	{
		delete farm[x++];
	}
	delete[] farm;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	//----------------------------------------------//
	return (0);
}
