/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:34:38 by iantar            #+#    #+#             */
/*   Updated: 2023/11/29 20:44:22 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int	Fixed::fractionBits = 8;

Fixed::Fixed(Fixed& obj)
{
	this->fixedNum = obj.fixedNum;
	std::cout << "Copy constructor" << std::endl;
}

Fixed::Fixed(void)
{
	fixedNum = 0;
	std::cout << "Default constructor" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor" << std::endl;
}

Fixed&	Fixed::operator=(Fixed& rhs)
{
		this->fixedNum = rhs.fixedNum;
		return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits method called\n";
	return (this->fixedNum);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits method colled\n";
	fixedNum = raw;
}
