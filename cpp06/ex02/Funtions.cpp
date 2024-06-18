/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Funtions.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 23:04:24 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/19 00:06:36 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base *generate(void)
{
	int	c = rand();

	if (c % 3 == 0)
		return (new A());
	if (c % 3 == 1)
		return (new B());
	if (c % 3 == 2)
		return (new C());
	return (NULL);
}

void	identify(Base *p)
{
	std::cout << "this Base type is:";

	if(dynamic_cast<A *>(p) != 0)
	{
		std::cout << "A" << std::endl;
		return;
	}
	if(dynamic_cast<B *>(p) != 0)
	{
		std::cout << "B" << std::endl;
		return;
	}
	if(dynamic_cast<C *>(p) != 0)
	{
		std::cout << "C" << std::endl;
		return;
	}
	std::cout << "sorry this is impossible dirty hacker!!" << std::endl;
}

void	identify(Base& p)
{
	std::cout << "this Base type is:";
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch(std::exception& e)
	{
		;
	}
	try
	{
		B &a = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)a;
	}
	catch(std::exception& e)
	{
		;
	}
	try
	{
		C &a = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)a;
	}
	catch(std::exception& e)
	{
		;
	}
	std::cout << "sorry this is impossible dirty hacker!!" << std::endl;
}
