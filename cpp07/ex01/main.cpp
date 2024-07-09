/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:36:52 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/10 00:57:04 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Iter.hpp"

void	printType(int i)
{
	std::cout << i;
}

void	minusOne(int& i)
{
	i -= 1;
}

template <typename T>
void	LowerCaseTemplate(T& c)
{
	if (static_cast<int>(c) < 97)
		c = c + 32;
}

void	UpperCase(char& c)
{
	if (static_cast<int>(c) >= 97)
		c = c - 32;
}

int main( void ) {
	char	str[5] = "hola";
	int	len = 4;

	std::cout << str << std::endl;
	Iter::iter(str, len, UpperCase);
	std::cout << str << std::endl;
	Iter::iter(str, len, LowerCaseTemplate<char>);
	std::cout << str << std::endl;

	int	nstr[5] = {1, 2, 3, 4};
	Iter::iter(nstr, len, minusOne);
	Iter::iter(nstr, len, printType);
	std::cout << std::endl;
}
