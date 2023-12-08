/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:03:55 by iantar            #+#    #+#             */
/*   Updated: 2023/12/03 19:28:01 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap()
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
    std::cout << "FragTrap default constructor\n";
}

FragTrap::FragTrap(std::string name)
{
	Name = name;
    HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
    std::cout << "FragTrap parametrize constructor\n";
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
