/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:12:59 by iantar            #+#    #+#             */
/*   Updated: 2023/12/03 17:40:58 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap default constructor\n";
}

ScavTrap::ScavTrap(std::string name)
{
    Name = name;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap parametrize constructor\n";
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor\n";
}


ScavTrap::ScavTrap(const ScavTrap& other)
{
    if (this == &other)
        return ;
    this->Name = other.Name;
    this->AttackDamage = other.AttackDamage;
    this->EnergyPoints = other.EnergyPoints;
    this->HitPoints = other.HitPoints;
    std::cout << "ScavTrap copy constructor\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
    if (this == &rhs)
        return (*this);
    this->Name = rhs.Name;
    this->AttackDamage = rhs.AttackDamage;
    this->EnergyPoints = rhs.EnergyPoints;
    this->HitPoints = rhs.HitPoints;
    std::cout << "ScavTrap copy assignement operator\n";
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{ 
    if (!HitPoints)
    {
        std::cout << "ScavTrap " << Name << " dosen't have HitPoints" << std::endl;
        return ;
    }
    if (!EnergyPoints)
    {
        std::cout << "ScavTrap " << Name << " dosen't have HitPoints" << std::endl;   
        return ;
    }
    std::cout << "ScavTrap " << Name 
    << " attacks " << target << ", causing "
    << AttackDamage << " points of damage!\n";
    EnergyPoints--;
}

void ScavTrap::guardGate(void)
{
    std::cout << "I am now in Gate keeper mode.\n";
}
