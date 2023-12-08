/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:14:01 by iantar            #+#    #+#             */
/*   Updated: 2023/12/08 15:25:40 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal's default constructor colled\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	*this = other;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs)
{
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	std::cout << "WrongAnimal's copy assingement operator called\n";
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal's destructor colled\n";
}

const std::string&  WrongAnimal::getType(void) const
{
	return (type);	
}

void    WrongAnimal::makeSound(void) const
{
    std::cout <<  WRONGANIMAL << std::endl;
}