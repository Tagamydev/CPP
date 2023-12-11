/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:57:34 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/11 21:22:16 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClassZombie.hpp>

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie*	result = new Zombie[N];
	if (!result)
		return (NULL);
	int	j;
	Zombie*	tmp;
	for(j = 0; j < N; j++) {
		tmp = result + j;
		tmp->putname(name);
	}
	return (result);
}
