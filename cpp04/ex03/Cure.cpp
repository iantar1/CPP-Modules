/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:06:41 by iantar            #+#    #+#             */
/*   Updated: 2023/12/11 21:10:11 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    
}

Cure::~Cure()
{
}

Cure::Cure(const Cure& other): AMateria(other)
{
}

Cure&   Cure::operator=(const Cure&)
{
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; 
}
