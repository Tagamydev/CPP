/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cheat.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/19 02:45:19 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHEAT_HPP
# define CHEAT_HPP
# include <string>
# include <iostream>
# include <exception>

class	Cheat{
	/* here every public statement */
	public:
		/* Copy assignment operator overload */
		Cheat& operator = (const Cheat& other);
		/* Destructor */
		virtual ~Cheat(void);

		static long double	stringToLongDouble(const std::string& str);
		static long double	checkFloat(const std::string& str);
		static long double	checkString(const std::string& str);
		static void		exceptionsNaN(const std::string& str);

		/* Convert */
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
		Cheat(void);
		/* Copy Constructor */
		Cheat(const Cheat& other);
};

#endif
