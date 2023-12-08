/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:54:06 by iantar            #+#    #+#             */
/*   Updated: 2023/12/07 10:43:47 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

void    test1(void)
{
    ClapTrap    robot1("ibrahim");

    for (int i = 0; i < 9; i++)
        robot1.attack("robot2");
    robot1.takeDamage(9);
    robot1.beRepaired(10);
    robot1.attack("robot3");
}

void    test2(void)
{
    ScavTrap    robot1("ibrahim");

    robot1.attack("x");
    robot1.takeDamage(9);
    robot1.beRepaired(10);
    robot1.guardGate();
}
void    test3(void)
{
    FragTrap    robot1("ibrahim");

    robot1.attack("x");
    robot1.takeDamage(9);
    robot1.beRepaired(10);
    robot1.highFivesGuys();
}
void    test4(void)
{
    DiamondTrap obj("Tashfin");
    std::cout << obj.get() << std::endl;
    //obj.atack("#bass");
    // obj.attack("ibrahim");
    // obj.guardGate();
    // obj.highFivesGuys();
    // obj.takeDamage(10);
   // obj.whoAmI();
    // std::cout << "ClapTrap's size: " << sizeof(ClapTrap) << "\n";
    // std::cout << "FragTrap's size: " << sizeof(FragTrap) << "\n";
    // std::cout << "ScavTrap's size: " << sizeof(ScavTrap) << "\n";
    // std::cout << "DiamondTrap's size: " << sizeof(DiamondTrap) << "\n";
}

int main(void)
{
    test4();
    return (EXIT_SUCCESS);
}