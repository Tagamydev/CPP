/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/12 05:17:46 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLASS_HPP
# define CLASS_HPP
# include <string>
# include <iostream>

template <typename T>
class	MutantStack{
	private:
		struct Node
		{
			T data;
			Node* next;
			Node(const T& value) : data(value), next(nullptr) {}
		};
		
		Node* head;
		Node* tail;
	public:
		MutantStack() : head(nullptr), tail(nullptr) {}
		
		~MutantStack() {
			Node* current = head;
			while (current != nullptr)
			{
				Node* next = current->next;
				delete current;
				current = next;
			}
		}
	
		void add(const T& value) {
			Node* newNode = new Node(value);
			if (tail)
			{
				tail->next = newNode;
				tail = newNode;
			}
			else
			{
				head = tail = newNode;
			}
		}
	
	class iterator {
		private:
			Node* current;
	
		public:
			using iterator_category = std::forward_iterator_tag;
			using value_type = T;
			using difference_type = std::ptrdiff_t;
			using pointer = T*;
			using reference = T&;
			
			iterator(Node* node = nullptr) : current(node) {}
			
			T& operator*() const { return current->data; }
			T* operator->() const { return &(current->data); }
			
			iterator& operator++() {
				if (current) current = current->next;
				return *this;
			}
			
			iterator operator++(int) {
				iterator temp = *this;
				++(*this);
				return temp;
			}
			
			bool operator==(const iterator& other) const { return current == other.current; }
			bool operator!=(const iterator& other) const { return current != other.current; }
	};
	iterator begin() { return iterator(head); }
	iterator end() { return iterator(nullptr); }
};

#endif
