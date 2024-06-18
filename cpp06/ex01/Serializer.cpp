/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:04:50 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/18 20:42:15 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Serializer.hpp"

Serializer::Serializer(){}
Serializer::~Serializer(){}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}


