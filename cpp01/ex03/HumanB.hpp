/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/11 20:49:23 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include <iostream>
# include <Weapon.hpp>

class	HumanB {
	public:
		HumanB( const std::string &name );
		HumanB( const char *name );
		~HumanB( void );
		void	attack( void );
		void	setWeapon( Weapon &weapon );
	private:
		std::string			name;
		Weapon				*weapon;
};

#endif
