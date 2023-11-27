/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:54:15 by iantar            #+#    #+#             */
/*   Updated: 2023/11/27 10:33:38 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"


ClapTrap::ClapTrap(): HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "Default Constructor\n";
}

ClapTrap::ClapTrap(std::string name): Name(name)
{
    std::cout << "Constructor\n";
}

ClapTrap::ClapTrap(ClapTrap& obj)
{
    this->Name = obj.   
}

ClapTrap& ClapTrap::operator=(ClapTrap&)
{
    
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor\n";
}
    
void	ClapTrap::attack(const std::string& target)
{
  if (HitPoints < AttackDamage || !EnergyPoints)
  {
    std::cout << "ana d3iff\n";
  }
  else
  {
    std::cout << ": ClapTrap " << Name 
    << " attacks " << target << ", causing"
    << AttackDamage << "points of damage!\n";
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
