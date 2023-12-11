/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:37:24 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/11 10:32:14 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

# include <iostream>
# include <Contact.hpp>

class	PhoneBook {
	public:
		void	addcontact(void);
		void	search(void);
		PhoneBook();
		~PhoneBook();

	private:
		Contact	contacts[8];
		int		ii;
		void	seecontact(size_t y);
};

#endif

