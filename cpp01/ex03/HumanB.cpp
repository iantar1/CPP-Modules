/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:17:36 by iantar            #+#    #+#             */
/*   Updated: 2023/11/09 11:17:46 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string setName):name(setName)
{
}

HumanB::~HumanB()
{
    
}

void    HumanB::attack(void) const
{
    
}

void    HumanB::setWeopen(Weapon& _weapon)
{
    weapon = _weapon;
}