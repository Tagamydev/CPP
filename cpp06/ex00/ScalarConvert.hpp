/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/18 04:13:46 by samusanc         ###   ########.fr       */
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

		static long double	stringToLongDouble(const std::string& str);
		static long double	checkFloat(const std::string& str);
		static long double	checkString(const std::string& str);
		static void		exceptionsNaN(const std::string& str);


		static char	convertToChar(const std::string& str);
		static int	convertToInt(const std::string& str);
		static float	convertToFloat(const std::string& str);
		static double	convertToDouble(const std::string& str);

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

		class	minusInfException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("-inf");
				}
		};

		class	infException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("inf");
				}
		};

		class	noDisException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("Non displayable");
				}
		};


	/* here every private statement */
	private:
		/* Constructor */
		ScalarConvert(void);
};

#endif
