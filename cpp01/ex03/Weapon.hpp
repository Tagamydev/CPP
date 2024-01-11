/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:39:47 by samusanc          #+#    #+#             */
/*   Updated: 2024/01/11 20:23:06 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class	Weapon {
	public:
		Weapon( const std::string& weapon );
		Weapon( const char *weapon );
		~Weapon( void );
		const std::string	&getType( void );
		void				setType( const std::string &type );
		void				setType( const char *type );
	private:
		std::string	type;
};

#endif
