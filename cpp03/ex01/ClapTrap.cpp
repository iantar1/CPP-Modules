/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:54:15 by iantar            #+#    #+#             */
/*   Updated: 2023/12/03 10:12:16 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"


ClapTrap::ClapTrap(): HitPoints(10), EnergyPoints(10), AttackDamage(0), Name("ROBOT")
{
    std::cout << "ClapTrap Default Constructor called\n";
}

ClapTrap::ClapTrap(std::string name): HitPoints(10), EnergyPoints(10), AttackDamage(0), Name(name)
{
    std::cout << "ClapTrap parametrize Constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->EnergyPoints = other.EnergyPoints;
    this->AttackDamage = other.AttackDamage;
    std::cout << "ClapCrap copy constructer called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
    if (this == &rhs)
        return (*this);
    this->Name = rhs.Name;
    this->HitPoints = rhs.HitPoints;
    this->EnergyPoints = rhs.EnergyPoints;
    this->AttackDamage = rhs.AttackDamage;
    std::cout << "ClapCrap copy asignment operator called\n";
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor\n";
}
    
void	ClapTrap::attack(const std::string& target)
{
    if (!HitPoints)
    {
        std::cout << "ClapTrap " << Name << " dosen't have HitPoints" << std::endl;
        return ;
    }
    if (!EnergyPoints)
    {
        std::cout << "ClapTrap " << Name << " dosen't have HitPoints" << std::endl;   
        return ;
    }
    std::cout << "ClapTrap " << Name 
    << " attacks " << target << ", causing "
    << AttackDamage << " points of damage!\n";
    EnergyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    if ((int)amount < 0)
    {
        std::cout << "Invalid amount\n";
        return ;
    }
    if (!HitPoints)
    {
		std::cout << "ClapTrap " << Name << " dosen't have HitPoints" << std::endl;
        return ;
    }
    if (amount > HitPoints)
        amount = HitPoints;
    HitPoints -= amount;
    std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    if (!EnergyPoints)
    {
        std::cout << "I need EnergyPoints\n";
        return ;
    }
    if (!HitPoints)
    {
        std::cout << "I need HitPoints\n";
        return ;
    }
    if ((int)amount < 0)
    {
        std::cout << "Invalid amount\n";
        return ;
    }
    HitPoints += amount;
    EnergyPoints--;
	std::cout << amount << " points added to ClapTrap " << Name << "'s HistPoints\n";
}
