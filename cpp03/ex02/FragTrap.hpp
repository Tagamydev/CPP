/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 19:30:30 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# include <ClapTrap.hpp>

class	FragTrap : public ClapTrap{
	/* here every public statement */
	public:
		/* Constructor */
		FragTrap(std::string title);
		/* Copy Constructor */
		FragTrap(const FragTrap& other);
		/* Copy assignment operator overload */
		FragTrap& operator = (const FragTrap& other);
		/* Destructor */
		~FragTrap(void);
		void	highFivesGuys(void);
};

#endif
