/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:06:34 by iantar            #+#    #+#             */
/*   Updated: 2023/12/10 15:00:00 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice(/* args */)
{
    type = "ice";
}

Ice::~Ice()
{
}

Ice::Ice(Ice&)
{

}

Ice&    Ice::operator=(Ice&)
{
    
}

AMateria* Ice::clone() const
{
    AMateria*   rtn;

    rtn = new Ice;
    return (rtn);
}

void Ice::use(ICharacter& target)
{
    std::cout << "shoots an ice bolt at " << target.getName() << std::endl; 
}
