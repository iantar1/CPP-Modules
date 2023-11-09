/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:17:36 by iantar            #+#    #+#             */
/*   Updated: 2023/11/09 14:06:19 by iantar           ###   ########.fr       */
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

void    HumanB::setWeapon(Weapon& _weapon)
{
    weapon = &_weapon;
}