/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbstratAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:56:00 by iantar            #+#    #+#             */
/*   Updated: 2023/12/09 10:10:34 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AbstratAnimal.hpp"

AbstratAnimal::AbstratAnimal()
{
	type = "AbstratAnimal";
	std::cout << "AbstratAnimal's default constructor colled" << std::endl;
}

AbstratAnimal::AbstratAnimal(const AbstratAnimal& other)
{
	*this = other;
}

AbstratAnimal&	AbstratAnimal::operator=(const AbstratAnimal& rhs)
{
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	std::cout << "AbstratAnimal's copy assingement operator called" << std::endl;
	return (*this);
}

AbstratAnimal::~AbstratAnimal()
{
	std::cout << "AbstratAnimal's destructor colled" << std::endl;
}

const std::string&  AbstratAnimal::getType(void) const
{
	return (type);	
}
