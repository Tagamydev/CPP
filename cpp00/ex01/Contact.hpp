/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classi.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:43:06 by samusanc          #+#    #+#             */
/*   Updated: 2023/12/11 09:57:52 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClassContact.hpp>

Contact::Contact()
{
	this->visible = 0;
	std::cout << "Constructor Contact called" << std::endl;
	return ;
}

Contact::~Contact()
{
	std::cout << "Destructor Contact called" << std::endl;
	return ;
}
