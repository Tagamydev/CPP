/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/07 23:10:09 by samusanc         ###   ########.fr       */
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

	/* Orthodox Canonical Form Requirements */
		/* Constructor */
		Fixed(void);
		/* Float Constructor */
		Fixed(const float value);
		/* Int Constructor */
		Fixed(const int value);
		/* Copy Constructor */
		Fixed(const Fixed& other);
		/* Destructor */
		~Fixed(void);

	/* Operators Overload */
		/* Copy Assignment Operator */
		Fixed&	operator = (const Fixed& other);
		/* Insertion Operator */
		friend std::ostream& operator<<(std::ostream&, const Fixed& other);
		/* Comparison Operators */
		bool	operator > (const Fixed& other);
		bool	operator < (const Fixed& other);
		bool	operator >= (const Fixed& other);
		bool	operator <= (const Fixed& other);
		bool	operator == (const Fixed& other);
		bool	operator != (const Fixed& other);
		/* Arithmetic Operators */
		Fixed	operator + (const Fixed& other);
		Fixed	operator - (const Fixed& other);
		Fixed	operator * (const Fixed& other);
		Fixed	operator / (const Fixed& other);

		/* Increment/Decrement Operators */
		Fixed	operator ++ (int);
		Fixed	operator ++ ();
		Fixed	operator -- (int);
		Fixed	operator -- ();

		/* other funtions here */
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void);
		int	toInt(void);
		float	toFloat(void) const;
		int	toInt(void) const;
		/* ex02 funtions */
		static Fixed&	min(Fixed& a, Fixed& b);
		static Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&	max(Fixed& a, Fixed& b);
		static Fixed&	max(const Fixed& a, const Fixed& b);


	/* here every private statement */
	private:
		int			value;
		static const int	bits = 8;
};

#endif
