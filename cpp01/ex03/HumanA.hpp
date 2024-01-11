/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/11 20:56:37 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include <iostream>
# include <Weapon.hpp>

class	HumanA {
	public:
		HumanA( const std::string &name, Weapon &weapon );
		HumanA( const char *name, Weapon &weapon );
		~HumanA( void );
		void	attack( void );
		void	setWeapon( Weapon &weapon );
	private:
		std::string			name;
		Weapon				*weapon;
};

#endif
