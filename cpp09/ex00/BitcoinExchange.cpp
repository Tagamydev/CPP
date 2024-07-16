/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:13:48 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/16 21:19:55 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::ifstream& dataBase, std::ifstream& in)
{
	if (dataBase.is_open())
		std::cout << "this is true always!" << std::endl;
	if (in.is_open())
		std::cout << "this is true always!" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{

}
