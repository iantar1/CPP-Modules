/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:12:59 by iantar            #+#    #+#             */
/*   Updated: 2023/12/03 21:02:00 by iantar           ###   ########.fr       */
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

ScavTrap::ScavTrap(const ScavTrap& obj)
{
    this->Name = obj.Name;
    this->EnergyPoints = obj.EnergyPoints;
    this->AttackDamage = obj.AttackDamage;
    this->HitPoints = obj.HitPoints;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& rhs)
{
    if (this == &rhs)
        return (*this);
    this->Name = rhs.Name;
    this->EnergyPoints = rhs.EnergyPoints;
    this->AttackDamage = rhs.AttackDamage;
    this->HitPoints = rhs.HitPoints;
    return (*this);
}

ScavTrap::ScavTrap(std::string name)
{
    Name = name;
    std::cout << "ScavTrap constructor\n";
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor\n";
}

void	ScavTrap::attack(const std::string& target)
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
