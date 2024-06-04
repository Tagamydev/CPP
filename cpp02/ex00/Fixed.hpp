/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/04 22:06:20 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP
# include <string>
# include <iostream>

class	Fixed{
	/* here every public statement */
	public:
		/* Constructor */
		Fixed(void);
		/* Copy Constructor */
		Fixed(const Fixed& other);
		/* Copy assignment operator overload */
		Fixed& operator = (const Fixed& other);
		/* Destructor */
		~Fixed(void);
		
		/* other funtions here */
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

	/* here every private statement */
	private:
		int			value;
		static const int	bits = 8;
};

#endif
