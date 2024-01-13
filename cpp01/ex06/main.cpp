/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/13 17:29:28 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int  main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
	} else {
		Harl	harl = Harl();
		harl.complain(argv[1]);
	}
}
