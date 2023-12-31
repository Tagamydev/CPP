/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:37:24 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/12 12:48:58 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class  Zombie {
	public:
		void	announce(void);
		void	putname(std::string name);
    	Zombie() : name("default") {
			std::cout << "zombie born" << std::endl;
		}
    	~Zombie();
	private:
		std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif

