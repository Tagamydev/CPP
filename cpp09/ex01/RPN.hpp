/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/21 15:56:55 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	RPN_HPP
# define RPN_HPP
# include <string>
# include <iostream>
# include <stack>

class	RPN{
	/* here every public statement */
	public:
		RPN(std::string numbers);
		/* Destructor */
		~RPN(void);
		bool	isNumber(char *str);
		float	getNumber();

	/* here every private statement */
	private:
		/* Constructor */
		RPN(void);
		/* Copy Constructor */
		RPN(const RPN& other);
		/* Copy assignment operator overload */
		RPN& operator = (const RPN& other);
		std::stack<float>	stack;

};

#endif
