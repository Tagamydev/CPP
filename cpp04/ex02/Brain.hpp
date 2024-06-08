/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 23:52:13 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class	Brain{
	/* here every public statement */
	public:
		/* Default Constructor */
		Brain(void);
		/* Copy Constructor */
		Brain(const Brain& other);
		/* Copy assignment operator overload */
		Brain& operator = (const Brain& other);
		/* Destructor */
		~Brain(void);
		std::string ideas[100];
};

#endif
