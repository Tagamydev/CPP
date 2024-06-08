/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 21:40:09 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP
# include <string>
# include <iostream>
# include <Animal.hpp>

class	Cat : public Animal{
	/* here every public statement */
	public:
		/* Default Constructor */
		Cat(void);
		/* Copy Constructor */
		Cat(const Cat& other);
		/* Copy assignment operator overload */
		Cat& operator = (const Cat& other);
		/* Destructor */
		~Cat(void);
		virtual void	makeSound(void) const;
};

#endif
