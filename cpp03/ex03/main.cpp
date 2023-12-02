/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:54:06 by iantar            #+#    #+#             */
/*   Updated: 2023/12/01 15:12:15 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap obj("brahim");
    
    obj.ScavTrap::attack("brahim");
    obj.ScavTrap::attack("brahim");
    obj.guardGate();
    std::cout << "string's size: " << sizeof(std::string) << "\n";
    std::cout << "FragTrap's size: " << sizeof(FragTrap) << "\n";
    std::cout << "ClapTrap's size: " << sizeof(ClapTrap) << "\n";
    std::cout << "ScavTrap's size: " << sizeof(ScavTrap) << "\n";
    std::cout << "DiamondTrap's size: " << sizeof(DiamondTrap) << "\n";
    return (EXIT_SUCCESS);
}