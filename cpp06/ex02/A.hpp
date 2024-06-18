/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/18 21:11:11 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	A_HPP
# define A_HPP
# pragma once
# include <string>
# include <iostream>
# include "Base.hpp"

class	A : public Base{
	/* here every public statement */
	public:
		A(void);
		/* Destructor */
		~A(void);
};

#endif
