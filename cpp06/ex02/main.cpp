/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/19 00:07:25 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main()
{
	Base	a = Base();

	Base	*b = generate();
	Base	*c = generate();
	Base	*d = generate();
	Base	*e = generate();

	Base	testA = A();
	Base	testB = B();
	Base	testC = C();
	Base*	testD = new A();
	Base*	testE = new B();
	Base*	testF = new C();
	Base	testG = Base();

	std::cout << "start ptr test" << std::endl;
	identify(b);
	identify(c);
	identify(d);
	identify(e);
	identify(a);
	
	std::cout << "start ref test" << std::endl;
	identify(testA);
	identify(testB);
	identify(testC);
	identify(testD);
	identify(testE);
	identify(testF);
	identify(testG);
	return (0);
}
