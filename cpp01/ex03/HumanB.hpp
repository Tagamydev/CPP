/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:37:24 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/12 21:24:04 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMBNB_HPP
# define HUMBNB_HPP
# include <iostream>
# include <string>
# include <Weapon.hpp>

class  HumanB {
	public:
		HumanB(const std::string &name);
		~HumanB();
		void	setWeapon(const Weapon &weapon);
		void	attack();
	private:
		std::string	name;
		Weapon*		weapon;
};

#endif
