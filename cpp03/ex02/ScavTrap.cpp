/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:12:59 by iantar            #+#    #+#             */
/*   Updated: 2023/12/03 21:03:13 by iantar           ###   ########.fr       */
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
    std::cout << "ScavTrap constructor\n";
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor\n";
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->EnergyPoints = other.EnergyPoints;
    this->AttackDamage = other.AttackDamage;
    std::cout << "ScavTrap copy constructer called\n";
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

ScavTrap&   ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this == &rhs)
        return (*this);
    this->Name = rhs.Name;
    this->HitPoints = rhs.HitPoints;
    this->EnergyPoints = rhs.EnergyPoints;
    this->AttackDamage = rhs.AttackDamage;
    std::cout << "ScavTrap copy asignment operator called\n";
    return (*this);
}



void ScavTrap::guardGate(void)
{
    std::cout << "I am now in Gate keeper mode.\n";
}
