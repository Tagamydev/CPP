/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/08 23:18:15 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_HPP
# define WRONGCAT_HPP
# include <string>
# include <iostream>
# include <WrongAnimal.hpp>

class	WrongCat : public WrongAnimal{
	/* here every public statement */
	public:
		/* Default Constructor */
		WrongCat(void);
		/* Copy Constructor */
		WrongCat(const WrongCat& other);
		/* Copy assignment operator overload */
		WrongCat& operator = (const WrongCat& other);
		/* Destructor */
		~WrongCat(void);
		virtual void	makeSound(void) const;
};

#endif
