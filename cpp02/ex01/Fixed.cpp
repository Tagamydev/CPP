/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:13:44 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/07 23:10:01 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <Fixed.hpp>

// Default constructor
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

// Copy constructor
Fixed::Fixed(const Fixed& copy)
{
	this->value = copy.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

// Copy assignment operator
Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->value = other.getRawBits();
	}
	return (*this);
}

// Insertion Operator
std::ostream& operator<<(std::ostream &out, const Fixed& other)
{
	out << (static_cast<float>(other.value) / (1 << other.bits));
	return (out);
}

// float overload constructor
Fixed::Fixed(const float other)
{
	//Round f is forbbiden in ex00 but allowed in the others
	this->setRawBits(static_cast<int>(roundf(other * (1 << bits))));
}

// int overload constructor
Fixed::Fixed(const int other)
{
	this->setRawBits(other * (1 << bits));
}

// destructor
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

float	Fixed::toFloat(void)
{
	return (static_cast<float>(this->value) / (1 << this->bits));
}

int	Fixed::toInt(void)
{
	return ((this->value) / (1 << this->bits));
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->value) / (1 << this->bits));
}

int	Fixed::toInt(void) const
{
	return ((this->value) / (1 << this->bits));
}

