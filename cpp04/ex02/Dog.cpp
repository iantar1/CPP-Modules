/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:45 by iantar            #+#    #+#             */
/*   Updated: 2023/12/12 12:08:58 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog's default constructor colled" << std::endl;
	this->type = DOG;
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog's destructor colled" << std::endl;
	delete	brain;
}

Dog::Dog(const Dog& other): AbstractAnimal(other)
{
	std::cout << "Dog's copy constructor called" << std::endl;
	brain = new Brain();
	*this = other;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog's copy assingement operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	delete brain;
	brain = new Brain(*(rhs.brain));
	AbstractAnimal::operator=(rhs);
	return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout <<  DOG_SOUND << std::endl;
}

Brain*	Dog::getBrain(void)
{
	return (brain);
}
