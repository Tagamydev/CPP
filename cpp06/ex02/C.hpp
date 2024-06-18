/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/18 21:12:16 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	C_HPP
# define C_HPP
# pragma once
# include <string>
# include <iostream>
# include "Base.hpp"

class	C : public Base{
	/* here every public statement */
	public:
		C(void);
		/* Destructor */
		~C(void);
};

#endif
