/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:23:37 by iantar            #+#    #+#             */
/*   Updated: 2023/12/03 17:20:37 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap default Constructor\n";
}


DiamondTrap::DiamondTrap(const std::string& name)
{
    Name = name;
    ClapTrap::Name = name + "_clap_name";
    std::cout << "DiamondTrap parametrize Constructor\n";
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap Destructor\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	if (this == &other)
        return ;
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->EnergyPoints = other.EnergyPoints;
    this->AttackDamage = other.AttackDamage;
    std::cout << "DiamondTrap copy constructer called\n";
}

DiamondTrap&   DiamondTrap::operator=(const DiamondTrap& rhs)
{
	if (this == &rhs)
        return (*this);
    this->Name = rhs.Name;
    this->HitPoints = rhs.HitPoints;
    this->EnergyPoints = rhs.EnergyPoints;
    this->AttackDamage = rhs.AttackDamage;
    std::cout << "DiamondTrap copy asignment operator called\n";
    return (*this);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << Name << " " << ClapTrap::Name << std::endl;
}
