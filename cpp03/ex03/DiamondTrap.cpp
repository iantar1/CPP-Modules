/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:23:37 by iantar            #+#    #+#             */
/*   Updated: 2023/12/07 10:44:53 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    HitPoints = FragTrap::HitPoints;
    EnergyPoints = ScavTrap::EnergyPoints;
    AttackDamage = FragTrap::AttackDamage;
    std::cout << "DiamondTrap default Constructor\n";
}


DiamondTrap::DiamondTrap(const std::string& name):ClapTrap(name + "_clap_name"), Name(name)
{
    
    //Name = name;
    HitPoints = FragTrap::HitPoints;
    EnergyPoints = ScavTrap::EnergyPoints;
    AttackDamage = FragTrap::AttackDamage;
    //ClapTrap::Name = name + "_clap_name";
    std::cout << "DiamondTrap parametrize Constructor\n";
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap Destructor\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
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

void DiamondTrap::atack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "I am " << Name << " ,and my grandfather is " << ClapTrap::Name << std::endl;
}
