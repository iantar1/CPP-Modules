/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:12:59 by iantar            #+#    #+#             */
/*   Updated: 2023/12/01 17:42:43 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()// HitPoints(100), EnergyPoints(50), AttackDamage(20)
{
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap default constructor\n";
}

ScavTrap::ScavTrap(std::string name)//:Name(name)
{
    Name = name;
    std::cout << "ScavTrap constructor\n";
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor\n";
}

void ScavTrap::guardGate(void)
{
    std::cout << "I am now in Gate keeper mode.\n";
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
    this->Name = rhs.Name;
    this->AttackDamage = rhs.AttackDamage;
    this->EnergyPoints = rhs.EnergyPoints;
    this->HitPoints = rhs.HitPoints;
    return (*this);
}