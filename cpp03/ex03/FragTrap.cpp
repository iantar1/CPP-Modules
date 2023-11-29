/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:03:55 by iantar            #+#    #+#             */
/*   Updated: 2023/11/29 10:23:33 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap()//: HitPoints(100), EnergyPoints(100), AttackDamage(30)
{
	std::cout << "FragTrap default Constructor\n";
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(std::string name)//: Name(name)
{
	std::cout << "FragTrap Constructor\n";
	Name = name;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Would you like to give a high five?\n";
}
