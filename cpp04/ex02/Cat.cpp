/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:43 by iantar            #+#    #+#             */
/*   Updated: 2023/12/12 12:07:59 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat's default constructor colled" << std::endl;
    this->type = CAT;
	brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat's destructor colled" << std::endl;
	delete	brain;
}

Cat::Cat(const Cat& other) : AbstractAnimal(other)
{
	std::cout << "Cat's copy constructor called" << std::endl;
	brain = new Brain();
	*this = other;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat's copy assingement operator called" << std::endl;
    if (this == &rhs) return (*this);
	AbstractAnimal::operator=(rhs);
	*brain = *(rhs.brain);
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout <<  CAT_SOUND << std::endl;
}

Brain*	Cat::getBrain(void)
{
	return (brain);
}
