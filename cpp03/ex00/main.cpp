/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:54:06 by iantar            #+#    #+#             */
/*   Updated: 2023/12/03 20:40:50 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"


int main(void)
{
    ClapTrap    robot1("brahim");
    ClapTrap    robot2(robot1);
    ClapTrap    robot3;

    robot3 = robot2;
    for (int i = 0; i < 9; i++)
        robot1.attack("robot2");
    robot1.takeDamage(9);
    robot1.beRepaired(10);
    robot1.attack("robot3");
    return (EXIT_SUCCESS);
}