/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:14:08 by iantar            #+#    #+#             */
/*   Updated: 2023/12/08 15:32:30 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat(/* args */)
{
	std::cout << "WrongCat's default constructor colled\n";
    this->type = WRONGCAT;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructor colled\n";
}

WrongCat::WrongCat(const WrongCat& other)
{
	*this = other;
	std::cout << "WrongCat's copy constructor called\n";
}

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
    if (this == &rhs) return (*this);
	type = rhs.type;
	std::cout << "WrongCat's copy assingement operator called\n";
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout <<  WRONG_CAT_SOUND << std::endl;
}
