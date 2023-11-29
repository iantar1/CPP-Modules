/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:23:37 by iantar            #+#    #+#             */
/*   Updated: 2023/11/29 11:16:34 by iantar           ###   ########.fr       */
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
    std::cout << "DiamondTrap Constructor\n";
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap Destructor\n";
}

void DiamondTrap::whoAmI(void)
{
    std::cout << Name  << ClapTrap::Name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
	this->Name = rhs.Name;
    this->FragTrap::HitPoints = rhs.FragTrap::HitPoints;
    this->ScavTrap::EnergyPoints = rhs.ScavTrap::EnergyPoints;
    this->FragTrap::AttackDamage = rhs.FragTrap::AttackDamage;
	return (*this);	
}
