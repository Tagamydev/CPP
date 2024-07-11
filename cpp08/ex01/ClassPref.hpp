/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPref.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/11 20:33:19 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
# define SPAN_HPP
# include <string>
# include <iostream>

class	Span{
	/* here every public statement */
	public:
		/* Constructor */
		Span(void);
		/* Copy Constructor */
		Span(const Span& other);
		/* Copy assignment operator overload */
		Span& operator = (const Span& other);
		/* Destructor */
		~Span(void);

	/* here every private statement */
	private:
};

#endif
