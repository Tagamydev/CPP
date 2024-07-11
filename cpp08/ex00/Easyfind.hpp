/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:56:16 by samusanc          #+#    #+#             */
/*   Updated: 2024/07/11 20:22:25 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef	EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <string>
# include <iostream>
# include <stdexcept>

template<typename T>
typename T::iterator easyFind(T & container, int value)
{
	typename T::iterator result= std::find(container.begin(), container.end(), value);
	if (result == container.end())
		throw std::out_of_range ("element not found :D");
	return (result);
}

#endif
