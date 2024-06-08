/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 05:37:03 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class	ClapTrap{
	/* here every public statement */
	public:
		/* Constructor */
		ClapTrap(void);
		/* Overload Constructor */
		ClapTrap(std::string title);
		/* Copy Constructor */
		ClapTrap(const ClapTrap& other);
		/* Copy assignment operator overload */
		ClapTrap& operator = (const ClapTrap& other);
		/* Destructor */
		~ClapTrap(void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	/* here every private statement accessible from derived object*/
	protected:
		std::string	name;
		int		hitPoints;
		int		energyPoints;
		int		attackDamage;
};

#endif
