/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:17:36 by iantar            #+#    #+#             */
/*   Updated: 2023/11/17 18:38:12 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string setName):weapon(NULL), name(setName)
{
}

void    HumanB::attack(void) const
{
    std::cout << name;
    std::cout << " attacks with their ";
    if (weapon)
        std::cout << weapon->getType();
    std::cout << std::endl;
}

void    HumanB::setWeapon(Weapon& _weapon)
{
    weapon = &_weapon;
}