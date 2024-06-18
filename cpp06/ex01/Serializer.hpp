/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/18 20:43:51 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SERIALIZER_HPP
# define SERIALIZER_HPP
# include <string>
# include <iostream>
# include <stdint.h>
# include "Data.hpp"

struct	Data;
class	Serializer{
	/* here every public statement */
	public:
		/* Copy assignment operator overload */
		Serializer& operator = (const Serializer& other);
		/* Destructor */
		virtual ~Serializer(void);

		static uintptr_t	serialize(Data* ptr);
		static Data		*deserialize(uintptr_t raw);

	/* here every private statement */
	private:
		/* Constructor */
		Serializer(void);
		/* Copy Constructor */
		Serializer(const Serializer& other);
};

#endif
