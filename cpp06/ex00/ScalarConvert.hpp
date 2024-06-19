/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/19 02:44:42 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCALARCONVERT_HPP
# define SCALARCONVERT_HPP
# include <string>
# include <iostream>
# include <exception>
# include "Cheat.hpp"

class	Cheat;
class	ScalarConvert{
	/* here every public statement */
	public:
		/* Copy assignment operator overload */
		ScalarConvert& operator = (const ScalarConvert& other);
		/* Destructor */
		virtual ~ScalarConvert(void);
		static void convert(const std::string& other);

	/* here every private statement */
	private:
		/* Constructor */
		ScalarConvert(void);
		/* Copy Constructor */
		ScalarConvert(const ScalarConvert& other);
};

#endif
