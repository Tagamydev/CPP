/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 21:40:52 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP
# include <string>
# include <iostream>
# include <Animal.hpp>

class	Dog : public Animal{
	/* here every public statement */
	public:
		/* Default Constructor */
		Dog(void);
		/* Copy Constructor */
		Dog(const Dog& other);
		/* Copy assignment operator overload */
		Dog& operator = (const Dog& other);
		/* Destructor */
		~Dog(void);
		virtual void	makeSound(void) const;
};

#endif
