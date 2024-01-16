/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/16 20:29:20 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class	Zombie{
	public:
		void	announce( void );
		Zombie( std::string &name );
		Zombie( const char *name );
		~Zombie( void );
	private:
		std::string	name;
};

void randomChump( std::string name );
void randomChump( const char *ptr );
Zombie* newZombie( std::string name );
Zombie* newZombie( const char *ptr );

#endif
