/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 23:12:59 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class	Animal{
	/* here every public statement */
	public:
		/* Default Constructor */
		Animal(void);
		/* Copy Constructor */
		Animal(const Animal& other);
		/* Copy assignment operator overload */
		Animal& operator = (const Animal& other);
		/* Destructor */
		virtual ~Animal(void);
		
		/* Other funtions */
		virtual void	makeSound(void) const;
		std::string	getType(void) const;
	/* here every private statement */
	protected:
		std::string	type;
};

#endif
