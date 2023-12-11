/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:06:34 by iantar            #+#    #+#             */
/*   Updated: 2023/12/11 14:34:49 by iantar           ###   ########.fr       */
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

Ice::Ice(Ice& other)
{
    *this = other;
}

Ice&    Ice::operator=(Ice&)
{
    return (*this);
}

AMateria* Ice::clone() const
{
    AMateria*   rtn;

    rtn = new Ice;
    return (rtn);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}
