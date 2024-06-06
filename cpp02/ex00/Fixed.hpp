/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/06 21:42:32 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP
# include <string>
# include <iostream>
# include <cmath>

//class
class	Fixed{
	/* here every public statement */
	public:
		/* Constructor */
		Fixed(void);
		/* Float Constructor */
		Fixed(const float value);
		/* Int Constructor */
		Fixed(const int value);
		/* Copy Constructor */
		Fixed(const Fixed& other);
		/* Copy Assignment Operator Overload */
		Fixed& operator = (const Fixed& other);
		/* Destructor */
		~Fixed(void);
		
		/* other funtions here */
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void);
		int	toInt(void);

	/* here every private statement */
	private:
		int			value;
		static const int	bits = 8;
};

#endif
