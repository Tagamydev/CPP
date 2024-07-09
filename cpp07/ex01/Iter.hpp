/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/10 00:55:17 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP
# define ITER_HPP
# include <string>
# include <iostream>

class	Iter{
	/* here every public statement */
	public:
		/* Constructor */
		Iter(void);
		/* Copy Constructor */
		Iter(const Iter& other);
		/* Copy assignment operator overload */
		Iter& operator = (const Iter& other);
		/* Destructor */
		~Iter(void);

		template <typename P, typename L, typename F>
		static void iter(P ptr, const L& len, const F& ft)
		{
			L	i;

			i = 0;
			while (i < len)
				ft(ptr[i++]);
		}
	/* here every private statement */
	private:
};

#endif
