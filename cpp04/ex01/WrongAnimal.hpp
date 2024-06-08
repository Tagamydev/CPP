/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 23:23:08 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>
# include <iostream>

class	WrongAnimal{
	/* here every public statement */
	public:
		/* Default Constructor */
		WrongAnimal(void);
		/* Copy Constructor */
		WrongAnimal(const WrongAnimal& other);
		/* Copy assignment operator overload */
		WrongAnimal& operator = (const WrongAnimal& other);
		/* Destructor */
		virtual ~WrongAnimal(void);
		
		/* Other funtions */
		void	makeSound(void) const;
		std::string	getType(void) const;
	/* here every private statement */
	protected:
		std::string	type;
};

#endif
