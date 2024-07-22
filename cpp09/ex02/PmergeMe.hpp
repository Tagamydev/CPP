/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/22 22:46:17 by samusanc         ###   ########.fr       */
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
void	sortTwo(typename T::iterator a, typename T::iterator b)
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
void	insert(T &list, T &numbers)
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
void	insert(T &list, int value)
{
	typename T::iterator	b = list.begin();
	typename T::iterator	e = list.end();

	while (b != e)
	{
		if (*b > value)
		{
			list.insert(b, value);
			break ;
		}
		++b;
	}
}

template <typename T>
void	FJMI_1(T &list, int z)
{
	(void)z;
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
		FJMI_1(stacka, 1);
		FJMI_1(stackb, 1);
		insert<T>(stacka, stackb);
		list = stacka;
	}
	else
	{
		int	last;

		last = list.back();
		list.pop_back();
		FJMI_1(list, 1);
		insert<T>(list, last);
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
		std::cout << "this is stack a:" << std::endl;
		printT(stacka);
		std::cout << "this is stack b:" << std::endl;
		printT(stackb);
		FJMI_1(stacka, 1);
		std::cout << "this is stack a after:" << std::endl;
		printT(stacka);
		FJMI_1(stackb, 1);
		std::cout << "this is stack b after:" << std::endl;
		printT(stackb);
		std::cout << std::endl;
		insert<T>(stacka, stackb);
		list = stacka;
	}
	else
	{
		int	last;

		last = list.back();
		list.pop_back();
		printT(list);
		FJMI_1(list, 1);
		insert<T>(list, last);
	}
		
}


#endif
