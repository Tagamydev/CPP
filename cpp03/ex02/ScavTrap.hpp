/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 18:57:02 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>
# include <ClapTrap.hpp>

class	ScavTrap : public ClapTrap{
	/* here every public statement */
	public:
		/* Constructor */
		ScavTrap(std::string title);
		/* Copy Constructor */
		ScavTrap(const ScavTrap& other);
		/* Copy assignment operator overload */
		ScavTrap& operator = (const ScavTrap& other);
		/* Destructor */
		~ScavTrap(void);
		void	attack(const std::string& target);
		void	guardGate();
};

#endif
