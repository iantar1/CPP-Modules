/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:06:34 by iantar            #+#    #+#             */
/*   Updated: 2023/12/11 21:10:02 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice()
{
    Type = "ice";
}

Ice::~Ice()
{
}

Ice::Ice(const Ice& other): AMateria(other)
{
}

Ice&    Ice::operator=(const Ice&)
{
    return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}
