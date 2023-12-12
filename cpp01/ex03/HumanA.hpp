/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:37:24 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/12 19:52:16 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include <string>
# include <Weapon.hpp>

class  HumanA {
	public:
		void	attack();
		HumanA(std::string name, Weapon& sword);
		~HumanA();
	private:
		Weapon&		sword;
		std::string	name;
};

#endif

