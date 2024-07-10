/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/10 05:39:36 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	Array_HPP
# define Array_HPP
# include <string>
# include <iostream>
# include <exception>

template <typename T>
class	Array{
	/* here every public statement */
	public:
		/* Constructor */
		Array<T>(void)
		{
			T	*result;

			result = new T[1];
			result[0] = 0;
			this->array = result;
			this->len = 1;
		}

		Array<T>(unsigned int n)
		{
			T		*result;
			unsigned int	i;

			i = 0;
			if (n < 0)
				throw outOfBoundsException();
			result = new T[n + 1];
			while (i < n)
			{
				result[i] = 0;
				i++;
			}
			len = n;
			array = result;
		}

		/* Copy Constructor */
		Array<T>(const Array& other)
		{
			*this = other;
		}

		/* Copy assignment operator overload */
		Array<T>& operator = (const Array& other)
		{
			T		*result;
			unsigned int	i;

			if (this != &other)
			{
				result = new T[other.size() + 1];
				i = 0;
				while (i < other.size())
				{
					result[i] = other.array[i];
					i++;
				}
				this->array = result; 
				this->len = i; 
			}
			return (*this);
		
		}

		T& operator [] (int i)
		{
			unsigned int	index = static_cast<unsigned int>(i);
			
			if (i < 0 || index >= len)
				throw outOfBoundsException();
			return (array[index]);
		}

		/* Destructor */
		~Array<T>(void)
		{
			delete [] array;
		}

		unsigned int size(void) const
		{
			return(len);
		}

		class	outOfBoundsException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("this index is out of bounds");
				}
		};

	/* here every private statement */
	private:
		T		*array;
		unsigned int	len;
};

#endif
