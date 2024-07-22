/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/22 13:21:07 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PMERGEME_HPP
# define PMERGEME_HPP
# include <string>
# include <iostream>
# include <ctime>
# include <list>
# include <vector>

class	PmergeMe{
	/* here every public statement */
	public:
		/* Destructor */
		~PmergeMe(void);
		PmergeMe(std::string numbers);

	/* here every private statement */
	private:
		/* Constructor */
		PmergeMe(void);
		/* Copy Constructor */
		PmergeMe(const PmergeMe& other);
		/* Copy assignment operator overload */
		PmergeMe& operator = (const PmergeMe& other);

		bool	isNumber(char *str);

		void	makeFirstContainer();
		void	makeSecondContainer();

		std::list<int>		general;
		std::list<int>		container1;
		std::vector<int>	container2;

		std::clock_t		c1_c;
		std::clock_t		c2_c;
};

template <typename T>
void	sortTwo(typename T::iterator &a, typename T::iterator &b)
{
	if (*a > *b)
	{
		int	tmp = *b;
		*b = *a;
		*a = tmp;
	}
	return ;
}

template <typename T>
void	sortPairs(T &list)
{
	typename T::iterator	b = list.begin();
	typename T::iterator	e = list.end();
	typename T::iterator	n1 = list.end();
	typename T::iterator	n2 = list.end();

	while (b != e)
	{
		if ((n1 == e) || (n2 == e))
		{
			if (n1 != e)
				n2 = b;
			else
				n1 = b;
		}
		if (n1 != e && n2 != e)
		{
			sortTwo<T>(n1, n2);
			n1 = e;
			n2 = e;
		}
		b++;
	}
}

template <typename T>
void	FJMI(T &list)
{
	if (list.size() == 1)
		return ;
	if (list.size() == 2)
	{
		typename T::iterator	f = list.begin();
		typename T::iterator	s = list.begin();

		s++;
		sortTwo<T>(f, s);
	}
	if (list.size() % 2 == 0)
	{
		typename T::iterator	b = list.begin();
		typename T::iterator	e = list.end();
		T			stackb;
		int			i;

		i = 0;
		sortPairs<T>(list);
		while (b != e)
		{
			if (i % 2 == 0)
			{
				stackb.push_back(*b);	
				list.erase(b);
			}
			i++;
			b++;
		}
		FJMI(list);
		FJMI(stackb);
	}
	else
	{
		int	last;

		last = list.back();
		list.pop_back();
		FJMI(list);
	}
		
}

#endif
