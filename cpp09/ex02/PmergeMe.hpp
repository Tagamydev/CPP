/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/23 08:51:19 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PMERGEME_HPP
# define PMERGEME_HPP
# include <string>
# include <iostream>
# include <ctime>
# include <list>
# include <vector>
# include <typeinfo>

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
void	printT(T &list)
{
	typename T::iterator	b = list.begin();
	typename T::iterator	e = list.end();

	while (b != e)
	{
		std::cout << *b << " ";
		b++;
	}
	std::cout << std::endl;
}

template <typename T>
void	insertVector(T &list, T &numbers)
{
	typename T::iterator	i = numbers.begin();
	typename T::iterator	j = list.begin();
	T			result;
	int			z;
	int			x;

	z = 0;
	x = list.size() + numbers.size();
	while (z != x)
	{
		if (*i < *j && i != numbers.end())
		{
			result.push_back(*i);
			i++;
		}
		else if (j != list.end())
		{
			result.push_back(*j);
			j++;
		}
		z++;
	}
	list = result;
}

template <typename T>
void	insertList(T &list, T &numbers)
{
	typename T::iterator	i = numbers.begin();
	typename T::iterator	j = numbers.end();
	typename T::iterator	b = list.begin();
	typename T::iterator	e = list.end();

	while (i != j)
	{
		b = list.begin();
		while (b != e)
		{
			if (*b > *i)
			{
				list.insert(b, *i);
				break ;
			}
			++b;
		}
		++i;
	}
}

template <typename T>
void	insertValue(T &list, int value)
{
	typename T::iterator	b = list.begin();
	typename T::iterator	e = list.end();
	int			inserted;

	inserted = 0;
	while (b != e)
	{
		if (*b > value)
		{
			list.insert(b, value);
			inserted++;
			break ;
		}
		typename T::iterator	tmp = list.end();
		tmp--;
		if (!inserted && tmp == b)
		{
			list.insert(e, value);
			++inserted;
		}
		++b;
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
		return ;
	}
	if (list.size() % 2 == 0)
	{
		typename T::iterator	b = list.begin();
		typename T::iterator	e = list.end();
		T			stacka;
		T			stackb;
		int			i;

		i = 0;
		sortPairs<T>(list);
		while (b != e)
		{
			if (i % 2 == 0)
				stackb.push_back(*b);	
			else
				stacka.push_back(*b);	
			b++;
			i++;
		}
		FJMI(stacka);
		FJMI(stackb);
		
		if (typeid(std::vector<int>) == typeid(T)) 
			insertVector(stacka, stackb);
		else
			insertList(stacka, stackb);
		list = stacka;
	}
	else
	{
		int	last;

		last = list.back();
		list.pop_back();
		FJMI(list);
		insertValue<T>(list, last);
	}
		
}

#endif
