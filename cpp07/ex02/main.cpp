/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/10 05:36:15 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "Array.hpp"

int main( void ) {
}
*/
#include <iostream>
#include <Array.hpp>
#include <cstdlib> 

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

	std::cout << " my own tests" << std::endl;

	Array<char>	hola(5);

	hola[0] = 'h';
	hola[1] = 'o';
	hola[2] = 'l';
	hola[3] = 'a';
	hola[4] = '\0';

	
	std::cout << hola[0] << std::endl;
	std::cout << hola[1] << std::endl;
	std::cout << hola[2] << std::endl;
	std::cout << hola[3] << std::endl;
	std::cout << hola[4] << std::endl;

	Array<char>	tmp;

	std::cout << tmp[0] << std::endl;
	std::cout << tmp.size() << std::endl;

    return 0;
}
