/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:17:09 by iantar            #+#    #+#             */
/*   Updated: 2023/11/17 18:38:02 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string setName, Weapon& setWeapon)
    :weapon(setWeapon), name(setName) 
{
}

void    HumanA::attack(void) const
{
    std::cout << name;
    std::cout << " attacks with their ";
    std::cout << weapon.getType();
    std::cout << std::endl;
}