/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:34:38 by iantar            #+#    #+#             */
/*   Updated: 2023/11/24 10:50:57 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int	Fixed::fractionBits = 8;

Fixed::Fixed(const Fixed& obj)
{
	//this->fixedNum = obj.fixedNum;
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(void):fixedNum(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits( int const raw )
{
	fixedNum = raw;
}
	
int Fixed::getRawBits( void ) const
{
	return (this->fixedNum);
}

Fixed::Fixed(const float fNum)
{
	std::cout << "Float constructor called\n";
	setRawBits(roundf(fNum * (1<<fractionBits)));
}

Fixed&	Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called\n";
	fixedNum = rhs.getRawBits();
	return (*this);
}

Fixed::Fixed(const int a)
{
	std::cout << "Int constructor called\n";	
	fixedNum = a * (1<<fractionBits);
}

float Fixed::toFloat( void ) const
{
	return (((float)fixedNum) / (1<<fractionBits));
}

int Fixed::toInt( void ) const
{
	return (roundf(fixedNum / (1<<fractionBits)));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}
