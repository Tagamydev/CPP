/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/21 18:24:23 by samusanc         ###   ########.fr       */
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
		std::list<int>		general;
		std::list<int>		container1;
		std::vector<int>	container2;
		std::clock_t		c1_c;
		std::clock_t		c2_c;

};

#endif
