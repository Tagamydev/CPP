/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/09 23:52:11 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	Whatever_HPP
# define Whatever_HPP
# include <string>
# include <iostream>

class	Whatever{
	/* here every public statement */
	public:
		/* Constructor */
		Whatever(void);
		/* Copy Constructor */
		Whatever(const Whatever& other);
		/* Copy assignment operator overload */
		Whatever& operator = (const Whatever& other);
		/* Destructor */
		~Whatever(void);

		template <typename T>
		static T const& max(T const& x, T const& y)
		{
			if (x > y)
				return (x);
			return (y);
		}

		template <typename T>
		static T const& min(T const& x, T const& y)
		{
			if (x < y)
				return (x);
			return (y);
		}

		template <typename T>
		static void	swap(T & x, T & y)
		{
			T	tmp;

			tmp = x;
			x = y;
			y = tmp;
		}

	/* here every private statement */
	private:
};

#endif
