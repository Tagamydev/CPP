/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/19 00:40:52 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"

int	main()
{
	Data	hello;

	hello.a1= 777;
	hello.a2= -85;
	hello.a3= 25;

	Data	*adeu = Serializer::deserialize(Serializer::serialize(&hello));
	std::cout << adeu->a1 << std::endl << adeu->a2 << std::endl << "hello:" << hello.a3 << std::endl;
}
