/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:43 by iantar            #+#    #+#             */
/*   Updated: 2023/12/12 10:56:37 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat's default constructor colled\n";
    this->type = CAT;
}

Cat::~Cat()
{
	std::cout << "Cat's destructor colled\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat's copy constructor called\n";
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat's copy assingement operator called\n";
    Animal::operator=(rhs);
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout <<  CAT_SOUND << std::endl;
}
