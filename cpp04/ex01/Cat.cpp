/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:43 by iantar            #+#    #+#             */
/*   Updated: 2023/12/08 18:16:27 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat's default constructor colled\n";
    this->type = CAT;
	brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat's destructor colled\n";
	delete	brain;
}

Cat::Cat(const Cat& other)
{
	*this = other;
	std::cout << "Cat's copy constructor called\n";
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat's copy assingement operator called\n";
    if (this == &rhs) return (*this);
	type = rhs.type;
	delete brain;
	brain = new Brain(*(rhs.brain));
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout <<  CAT_SOUND << std::endl;
}
