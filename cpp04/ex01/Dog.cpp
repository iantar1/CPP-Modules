/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:45 by iantar            #+#    #+#             */
/*   Updated: 2023/12/08 18:16:21 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog's default constructor colled\n";
	this->type = DOG;
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog's destructor colled\n";
	delete	brain;
}

Dog::Dog(const Dog& other)
{
	*this = other;
	std::cout << "Dog's copy constructor called\n";
}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog's copy assingement operator called\n";
	if (this == &rhs)
		return (*this);
	delete brain;
	brain = new Brain(*(rhs.brain));
	this->type = rhs.type;
	return (*this);
}


void    Dog::makeSound(void) const
{
    std::cout <<  DOG_SOUND << std::endl;
}
