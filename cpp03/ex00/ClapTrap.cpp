/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:54:15 by iantar            #+#    #+#             */
/*   Updated: 2023/11/29 14:37:12 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"


ClapTrap::ClapTrap(): HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap Default Constructor\n";
}

ClapTrap::ClapTrap(std::string name): HitPoints(10), EnergyPoints(10), AttackDamage(0), Name(name)
{
    std::cout << "ClapTrap parametrize Constructor\n";
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
  if (HitPoints < AttackDamage || !EnergyPoints)
  {
    std::cout << "ana d3iff\n";
  }
  else
  {
    std::cout << "ClapTrap " << Name 
    << " attacks " << target << ", causing "
    << AttackDamage << " points of damage!\n";
    HitPoints -= AttackDamage;
    EnergyPoints--;
  }
}

void	ClapTrap::takeDamage(unsigned int amount)//if amount = maxInt
{
    if ((int)amount < 0)
        return ;
    if (HitPoints)
        HitPoints += amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    if (!EnergyPoints)
    {
        std::cout << "khssni Tta9a alhaj\n";
        return ;
    }
    if (!HitPoints)
    {
        std::cout << "A ssb7allah ashrriff\n";
        return ;
    }
    if ((int)amount < 0)
    {
        std::cout << "Maf3ayl mawalo\n";
        return ;
    }
    HitPoints += amount;
    EnergyPoints--;
}
