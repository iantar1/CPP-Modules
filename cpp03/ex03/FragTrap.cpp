/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:03:55 by iantar            #+#    #+#             */
/*   Updated: 2023/12/03 20:56:54 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default Constructor\n";
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(const std::string& name)
{
	std::cout << "FragTrap Constructor\n";
	Name = name;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor\n";
}

FragTrap::FragTrap(const FragTrap& other)
{
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->EnergyPoints = other.EnergyPoints;
    this->AttackDamage = other.AttackDamage;
    std::cout << "FragTrap copy constructer called\n";
}

FragTrap&   FragTrap::operator=(const FragTrap& rhs)
{
	if (this == &rhs)
        return (*this);
    this->Name = rhs.Name;
    this->HitPoints = rhs.HitPoints;
    this->EnergyPoints = rhs.EnergyPoints;
    this->AttackDamage = rhs.AttackDamage;
    std::cout << "FragTrap copy asignment operator called\n";
    return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Would you like to give a high five?\n";
}
