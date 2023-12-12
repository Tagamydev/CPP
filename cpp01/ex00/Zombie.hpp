/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:37:24 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/12 12:46:08 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class  Zombie {
	public:
		void	announce(void);
    	Zombie(std::string newz);
    	~Zombie();
	private:
		std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
