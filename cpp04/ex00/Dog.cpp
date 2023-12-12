/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:45 by iantar            #+#    #+#             */
/*   Updated: 2023/12/12 10:55:48 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog's default constructor colled\n";
	this->type = DOG;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog's copy constructor called\n";
}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog's copy assingement operator called\n";
	Animal::operator=(rhs);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog's destructor colled\n";
}

void    Dog::makeSound(void) const
{
    std::cout <<  DOG_SOUND << std::endl;
}
