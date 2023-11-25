/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:34:38 by iantar            #+#    #+#             */
/*   Updated: 2023/11/21 17:19:25 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int	Fixed::fractionBits = 8;

Fixed::Fixed(Fixed& obj)
{
	this->fixedNum = obj.fixedNum;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(void)
{
	fixedNum = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	return (this->fixedNum);
}
