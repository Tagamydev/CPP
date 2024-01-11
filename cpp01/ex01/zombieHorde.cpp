/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:12:44 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/09 20:30:15 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie* zombieHorde( int N, std::string name ) {
	Zombie	*result = new Zombie[N];
	Zombie	tmp = Zombie();
	tmp.coronation(name);

	int	i = 0;
	while (i < N) {
		result[i] = tmp;
		i++;
	}
	return (result);
}
