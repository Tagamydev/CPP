/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/16 01:24:28 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stack>
#include <list>
#include "MutantStack.hpp"

int	main()
{
	std::cout << "---------------------my own tests----------------" << std::endl;
	MutantStack<int>		hola;

	hola.push(77);
	hola.push(88);
	hola.push(99);
	MutantStack<int>::iterator	i = hola.begin();

	
	i++;//88
	std::cout << *i << std::endl;
	std::cout << *++i << std::endl;//99
	std::cout << *i-- << std::endl;
	std::cout << *i << std::endl;
	std::cout << *--i << std::endl;
	std::cout << "--------------------- 42 test main----------------" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "--------------------- 42 changing the stack for list----------------" << std::endl;
	std::list<int> mstack2;
	mstack2.push_back(5);
	mstack2.push_back(17);
	std::cout << *--mstack2.end() << std::endl;
	mstack2.pop_back();
	std::cout << mstack2.size() << std::endl;
	mstack2.push_back(3);
	mstack2.push_back(5);
	mstack2.push_back(737);
	//[...]
	mstack2.push_back(0);
	std::list<int>::iterator it2 = mstack2.begin();
	std::list<int>::iterator ite2 = mstack2.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	return 0;
}
