/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:54:06 by iantar            #+#    #+#             */
/*   Updated: 2023/12/03 20:51:10 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

void    test1(void)
{
    ClapTrap    robot1("brahim");

    for (int i = 0; i < 9; i++)
        robot1.attack("robot2");
    robot1.takeDamage(9);
    robot1.beRepaired(10);
    robot1.attack("robot3");
}

void    test2(void)
{
    ScavTrap    robot1("brahim");

    robot1.attack("x");
    robot1.takeDamage(9);
    robot1.beRepaired(10);
    robot1.guardGate();
}
void    test3(void)
{
    FragTrap    robot1("brahim");

    robot1.attack("x");
    robot1.takeDamage(9);
    robot1.beRepaired(10);
    robot1.highFivesGuys();
}

int main(void)
{
    // test3();
    // test2();
    //test1();

    return (EXIT_SUCCESS);
}