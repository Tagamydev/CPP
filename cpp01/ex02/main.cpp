/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/12 13:21:29 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int  main()
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;

	std::cout << "adress memory of brain " << &brain << std::endl;
	std::cout << "adress memory of stringPTR " << stringPTR << std::endl;
	std::cout << "adress memory of stringREF " << &stringREF << std::endl;
	std::cout << "value of brain " << brain << std::endl;
	std::cout << "value of stirngPTR " << *stringPTR << std::endl;
	std::cout << "value of stirngREF " << stringREF << std::endl;
}
