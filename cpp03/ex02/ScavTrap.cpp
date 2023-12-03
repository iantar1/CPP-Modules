/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:12:59 by iantar            #+#    #+#             */
/*   Updated: 2023/12/03 14:57:34 by iantar           ###   ########.fr       */
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
    std::cout << "ScavTrap constructor\n";
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
    this->HitPoints = other.HitPoints;
    this->EnergyPoints = other.EnergyPoints;
    this->AttackDamage = other.AttackDamage;
    std::cout << "ScavTrap copy constructer called\n";
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
