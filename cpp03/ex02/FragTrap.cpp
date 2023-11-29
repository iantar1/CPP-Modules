/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:03:55 by iantar            #+#    #+#             */
/*   Updated: 2023/11/28 16:53:05 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap()//: HitPoints(100), EnergyPoints(100), AttackDamage(30)
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(std::string name)//: Name(name)
{
	Name = name;
}

FragTrap::~FragTrap()
{
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Would you like to give a high five?\n";
}
