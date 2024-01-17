/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/17 19:55:44 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class  Zombie {
 public:
    void  announce(void);
    void  coronation(std::string name);
    Zombie(void);
    ~Zombie(void);
 private:
    std::string  name;
};

Zombie* zombieHorde(int N, std::string name);
Zombie* zombieHorde(int N, const char *name);

#endif
