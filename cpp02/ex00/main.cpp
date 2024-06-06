/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/06 21:50:34 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int	main()
{
	Fixed test = Fixed(12.3f);
	Fixed test1 = Fixed(12.35f);
	Fixed test2 = Fixed(12.5f);
	Fixed test3 = Fixed(12.53f);
	std::cout << test.getRawBits() << std::endl;
	std::cout << test1.getRawBits() << std::endl;
	std::cout << test2.getRawBits() << std::endl;
	std::cout << test3.getRawBits() << std::endl;
	std::cout << test.toFloat() << std::endl;
	std::cout << test1.toFloat() << std::endl;
	std::cout << test2.toFloat() << std::endl;
	std::cout << test3.toFloat() << std::endl;
	Fixed test4 = Fixed(test1.toFloat());
	std::cout << test4.toFloat() << std::endl;
	std::cout << "holaaa" << std::endl;
	std::cout << test3 << std::endl;
	
	return (0);
}
