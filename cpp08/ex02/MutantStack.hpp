/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/16 00:51:43 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLASS_HPP
# define CLASS_HPP
# include <string>
# include <iostream>
# include <stack>
# include <iterator>

template <typename T>
class	MutantStack : public std::stack<T>{
	public:
		class iterator : public std::iterator<std::bidirectional_iterator_tag, T>
		{
		public:
			iterator(typename std::deque<T>::iterator it) : _it(it) {}
			iterator(const iterator& other) : _it(other._it) {}
	
			iterator& operator++()
			{
				++_it;
				return *this;
			}
	
			iterator operator++(int)
			{
				iterator tmp = *this;
				++_it;
				return tmp;
			}
	
			iterator& operator--()
			{
				--_it;
				return *this;
			}
	
			iterator operator--(int)
			{
				iterator tmp = *this;
				--_it;
				return tmp;
			}
	
			bool operator==(const iterator& other) const { return _it == other._it; }
			bool operator!=(const iterator& other) const { return _it != other._it; }
	
			T& operator*() { return *_it; }
			T* operator->() { return &(*_it); }
	
		private:
			typename std::deque<T>::iterator _it;
		};
	
		iterator begin() { return iterator(this->c.begin()); }
		iterator end() { return iterator(this->c.end()); }
};

#endif
