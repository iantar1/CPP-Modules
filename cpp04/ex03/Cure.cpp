/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:06:41 by iantar            #+#    #+#             */
/*   Updated: 2023/12/10 15:01:31 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
}

Cure::~Cure()
{
}

Cure::Cure(Cure&)
{

}

Cure&   Cure::operator=(Cure&)
{
        
}

AMateria* Cure::clone() const
{
    AMateria*   rtn;

    rtn = new Cure;
    return (rtn);
}

void Cure::use(ICharacter& target)
{
    std::cout << "heals " << target.getName() << "’s wounds" << std::endl; 
}
