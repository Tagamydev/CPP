/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/18 23:26:02 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	Base_HPP
# define Base_HPP
# pragma once
# include <string>
# include <iostream>

class	Base{
	public:
		/* Destructor */
		virtual ~Base(void);
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base& p);


#endif
