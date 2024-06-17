/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/17 18:25:20 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCALARCONVERT_HPP
# define SCALARCONVERT_HPP
# include <string>
# include <iostream>
# include <exception>

class	ScalarConvert{
	/* here every public statement */
	public:
		/* Copy Constructor */
		ScalarConvert(const ScalarConvert& other);
		/* Copy assignment operator overload */
		ScalarConvert& operator = (const ScalarConvert& other);
		/* Destructor */
		virtual ~ScalarConvert(void);

		virtual void	test() const = 0;

		static void	convertToChar(const std::string& str);
		static void	convertToInt(const std::string& str);
		static void	convertToFloat(const std::string& str);
		static void	convertToDouble(const std::string& str);

		class	impossibleException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("impossible");
				}
		};

		class	nanException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("nan");
				}
		};

		class	minusInffException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("-inf");
				}
		};

		class	inffException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("inf");
				}
		};


	/* here every private statement */
	private:
		/* Constructor */
		ScalarConvert(void);
};

#endif
