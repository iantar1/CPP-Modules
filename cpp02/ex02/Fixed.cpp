/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:34:38 by iantar            #+#    #+#             */
/*   Updated: 2023/11/25 13:11:22 by iantar           ###   ########.fr       */
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

bool	Fixed::operator>(const Fixed& rhs)
{
	return (this->fixedNum > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed& rhs)
{
	return (this->fixedNum < rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed& rhs)
{
	return (this->fixedNum <= rhs.getRawBits());
}
bool	Fixed::operator>=(const Fixed& rhs)
{
	return (this->fixedNum >= rhs.getRawBits());
}
bool	Fixed::operator==(const Fixed& rhs)
{
	return (this->fixedNum == rhs.getRawBits());
}
bool	Fixed::operator!=(const Fixed& rhs)
{
	return (this->fixedNum != rhs.getRawBits());
}


Fixed	Fixed::operator+(const Fixed& rhs)
{
	float	result;

	result = this->fixedNum + rhs.getRawBits();
	return (Fixed(result / (1 << Fixed::fractionBits)));
}

Fixed	Fixed::operator-(const Fixed& rhs)
{
	
	float	result;

	result = this->fixedNum - rhs.getRawBits();
	return (Fixed(result / (1 << Fixed::fractionBits)));
}

Fixed	Fixed::operator*(const Fixed& rhs)
{
	float	result;

	result = (this->fixedNum * rhs.getRawBits());
	return (Fixed(result / (1 << (Fixed::fractionBits * 2))));
}

Fixed	Fixed::operator/(const Fixed& rhs)
{
		float	result;

	result = ((this->fixedNum * (1 << (Fixed::fractionBits))) / rhs.getRawBits());
	return (Fixed(result / (1 << (Fixed::fractionBits))));
}

Fixed&	Fixed::operator++(void)
{
	this->fixedNum = this->fixedNum + EPSILON * (1 << (Fixed::fractionBits));
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	this->fixedNum = this->fixedNum - EPSILON * (1 << (Fixed::fractionBits));
	return (*this);
}

Fixed	Fixed::operator++(int)//why int and not Fixed, and how the compiler distinguitch between ++a and a++, by just adding "int" in the parameter 
{
	Fixed	tmp(*this);
	this->fixedNum = this->fixedNum + EPSILON * (1 << (Fixed::fractionBits));
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->fixedNum = this->fixedNum - EPSILON * (1 << (Fixed::fractionBits));
	return (tmp);
}

Fixed&	Fixed::min(Fixed& fix1, Fixed& fix2)
{
	if (fix1.getRawBits() < fix2.getRawBits())
		return (fix1);
	return (fix2);	
}


Fixed&	Fixed::min(const Fixed& fix1, const Fixed& fix2)
{
	if (fix1.getRawBits() < fix2.getRawBits())
		return (const_cast<Fixed&>(fix1));
	return (const_cast<Fixed&>(fix2));
}

Fixed&	Fixed::max(Fixed& fix1, Fixed& fix2)//why const??
{
	if (fix1.getRawBits() > fix2.getRawBits())
		return (fix1);
	return (fix2);
}

Fixed&	Fixed::max(const Fixed& fix1, const Fixed& fix2)
{
	if (fix1.getRawBits() > fix2.getRawBits())
		return (const_cast<Fixed&>(fix1));
	return (const_cast<Fixed&>(fix2));
}
