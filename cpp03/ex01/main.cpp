/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:54:06 by iantar            #+#    #+#             */
/*   Updated: 2023/12/03 20:46:39 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

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

int main(void)
{
    //test1();
    //test2();
    return (EXIT_SUCCESS);
}