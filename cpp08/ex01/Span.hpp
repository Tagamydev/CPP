/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/12 02:43:56 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
# define SPAN_HPP
# include <string>
# include <iostream>
# include <list>

class	Span{
	/* here every public statement */
	public:
		Span(const unsigned int& n);
		/* Copy Constructor */
		Span(const Span& other);
		/* Copy assignment operator overload */
		Span& operator = (const Span& other);
		/* Destructor */
		~Span(void);

		void	addNumber(const int& n);
		int	shortestSpan();
		int	longestSpan();
		template<typename T>
		void	addNumbers(T begin, T end)
		{
			if (std::distance(begin, end) > static_cast<int>(len - span.size()))
				throw std::overflow_error("Not enough space in Span to add these numbers");
			while (begin != end)
			{
				span.push_back(*begin);
				begin++;
			}
		}

	/* here every private statement */
	private:
		/* Constructor */
		Span(void);
		std::list<int>	span;
		unsigned int	len;
};

#endif
