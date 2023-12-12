/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:56:00 by iantar            #+#    #+#             */
/*   Updated: 2023/12/12 11:24:05 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << "Animal's default constructor colled\n";
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal's copy constructor called\n";
	*this = other;
}

Animal&	Animal::operator=(const Animal& rhs)
{
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	std::cout << "Animal's copy assingement operator called\n";
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal's destructor colled\n";
}

const std::string&  Animal::getType(void) const
{
	return (type);	
}

void    Animal::makeSound(void) const
{
    std::cout <<  ANIMAL << std::endl;
}
