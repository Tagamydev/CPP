/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:12:44 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/17 19:56:06 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie* zombieHorde(int N, std::string name) {
  Zombie  *result = new Zombie[N];
  Zombie  tmp = Zombie();
  tmp.coronation(name);
  int  i = 0;
  while (i < N) {
    result[i] = tmp;
    i++;
  }
  return (result);
}

Zombie* zombieHorde(int N, const char *name) {
  Zombie  tmp = Zombie();
  if (name == nullptr) {
      tmp.coronation("default zombie");
  } else {
      tmp.coronation(name);
  }
  Zombie  *result = new Zombie[N];
  int  i = 0;
  while (i < N) {
    result[i] = tmp;
    i++;
  }
  return (result);
}
