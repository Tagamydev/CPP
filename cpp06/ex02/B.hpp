/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/18 21:11:46 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	B_HPP
# define B_HPP
# pragma once
# include <string>
# include <iostream>
# include "Base.hpp"

class	B : public Base{
	/* here every public statement */
	public:
		B(void);
		/* Destructor */
		~B(void);
};

#endif
