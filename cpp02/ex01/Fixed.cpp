/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:13:44 by samusanc          #+#    #+#             */
/*   Updated: 2024/06/07 22:08:30 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <Fixed.hpp>

// Default constructor
Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

// Copy constructor
Fixed::Fixed(const Fixed& copy)
{
	this->value = copy.getRawBits();
	//std::cout << "Copy constructor called" << std::endl;
}

// Copy assignment operator
Fixed&	Fixed::operator=(const Fixed& other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->value = other.getRawBits();
	}
	return (*this);
}

// Comparison Operators
bool	Fixed::operator>(const Fixed& other)
{
	if (this->value > other.value)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& other)
{
	if (this->value < other.value)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& other)
{
	if (this->value >= other.value)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& other)
{
	if (this->value <= other.value)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed& other)
{
	if (this->value == other.value)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& other)
{
	if (this->value != other.value)
		return (true);
	return (false);
}

// Arithmetic operators

Fixed	Fixed::operator+(const Fixed& other)
{
	Fixed	tmp;

	int	result = this->value + other.value;
	tmp.setRawBits(result);
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed& other)
{
	Fixed	tmp;

	int	result = this->value - other.value;
	tmp.setRawBits(result);
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed& other)
{
	Fixed	tmp;

	long long int result = static_cast<long long int>(this->value) * other.value;
	tmp.setRawBits(static_cast<int>(result >> this->bits));
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed& other)
{
	Fixed	tmp;

	long long int temp = (static_cast<long long int>(this->getRawBits()) << this->bits) / other.getRawBits();
	tmp.setRawBits(static_cast<int>(temp));
	return (tmp);
}

// Icrement/Decrement operators

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	this->value += 1;
	return (tmp);
}

Fixed	Fixed::operator++()
{
	this->value += 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	this->value -= 1;
	return (tmp);
}

Fixed	Fixed::operator--()
{
	this->value -= 1;
	return (*this);
}

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
	//std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int	Fixed::getRawBits(void) const
{
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

// ex02 funtions
Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	Fixed	tmp1 = a;
	Fixed	tmp2 = b;
	if (tmp1 < tmp2)
		return ((Fixed&)a);
	else
		return ((Fixed&)b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	Fixed	tmp1 = a;
	Fixed	tmp2 = b;
	if (tmp1 > tmp2)
		return ((Fixed&)a);
	else
		return ((Fixed&)b);
}
