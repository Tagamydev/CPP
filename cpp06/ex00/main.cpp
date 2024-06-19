/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/19 02:44:19 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <float.h>
#include <cmath>
#include <iomanip>
#include "ScalarConvert.hpp"



int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: invalid arguments!" << std::endl;
		return(0);
	}
	else
	{
		ScalarConvert::convert(argv[1]);
	}
	return (0);
}
