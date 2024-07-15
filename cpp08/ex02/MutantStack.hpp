/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/15 23:51:50 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLASS_HPP
# define CLASS_HPP
# include <string>
# include <iostream>

/*
template <typename T>
class	Tlist{
	public:
		Tlist<T>(void)
		{
			content = 0;
			next = NULL;
			last = NULL;
		}

		Tlist<T>(T con)
		{
			content = con;
			next = NULL;
		}

		bool	end(void) const
		{
			if (next == NULL)
				return (true);
			return (false);
		}

		Tlist	*getNext(void)
		{
			return (next);
		}

		Tlist	*getLast(void)
		{
			return (last);
		}

		T&	getContent(void)
		{
			return (content);
		}

		void	setNext(Tlist *nex)
		{
			next = nex;
		}

		void	setLast(Tlist *las)
		{
			last = las;
		}

	private:
		class Tlist	*next;
		class Tlist	*last;
		T		content;
};
*/

template <typename T>
class	MutantStack{

	public:
		/* Constructor */
		MutantStack<T>(void)
		{
			head = NULL;
			tail = NULL;
			len = 0;
		}

		/* Destructor */
		~MutantStack<T>(void)
		{
			Tlist<T>	*tmp;

			tmp = NULL;
			if (head == NULL)
				return ;
			while (head->getNext())
			{
				tmp = head->getNext();
				delete head;
				head = tmp;
			}
		}

		unsigned int	size() const
		{
			return (len);
		}

		T&	top()
		{
			if (!head)
				throw	std::out_of_range ("No elements in the stack");
			return (head->getContent());
		}

		/* Push Value */
		void	push(T	content)
		{
			Tlist<T>	*tmp;

			tmp = new Tlist<T>(content);
			if (!tmp)
				throw	std::out_of_range ("Memory error");
			if (head)
			{
				tmp->setLast(tail);
				tail->setNext(tmp);
			}
			else
			{
				head = tmp;
				tail = tmp;
			}
			tail = tmp;
			len++;
		}

		class	iterator{
			public:
				iterator(Tlist<T> *node)
				{
					actualNode = node;
				}
				
				T& operator *()
				{
					if (actualNode)
						return(actualNode->getContent());
					else
						throw	std::out_of_range ("out of range iterator");
				}

				MutantStack<T>::iterator	operator ++()
				{
					if (actualNode)
						actualNode = actualNode->getNext();
					else
						throw	std::out_of_range ("out of range iterator");
					return	(MutantStack<T>::iterator(actualNode));
				}

				MutantStack<T>::iterator	operator ++(int)
				{
					Tlist<T>	*tmp = actualNode;

					if (actualNode)
						actualNode = actualNode->getNext();
					else
						throw	std::out_of_range ("out of range iterator");
					return	(MutantStack<T>::iterator(tmp));
				}

				MutantStack<T>::iterator	operator --()
				{
					if (actualNode)
						actualNode = actualNode->getLast();
					else
						throw	std::out_of_range ("out of range iterator");
					return	(MutantStack<T>::iterator(actualNode));
				}

				MutantStack<T>::iterator	operator --(int)
				{
					Tlist<T>	*tmp = actualNode;

					if (actualNode)
						actualNode = actualNode->getLast();
					else
						throw	std::out_of_range ("out of range iterator");
					return	(MutantStack<T>::iterator(tmp));
				}

			private:
				Tlist<T>	*actualNode;
		};

		MutantStack<T>::iterator	begin(void)
		{
			return	(MutantStack<T>::iterator(head));
		}

		MutantStack<T>::iterator	end(void)
		{
			return	(MutantStack<T>::iterator(NULL));
		}

	private:
		Tlist<T>	*head;
		Tlist<T>	*tail;
		unsigned int	len;
};

#endif
