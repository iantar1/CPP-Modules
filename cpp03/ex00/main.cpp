/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:54:06 by iantar            #+#    #+#             */
/*   Updated: 2023/11/29 14:39:49 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    robot1("hi");
    ClapTrap    robot2(robot1);
    ClapTrap    robot3;

    robot3 = robot2;
    robot1.attack("k");
    robot2.attack("k");
    // robot1.attack("3bbas");
    // robot1.beRepaired(10);
    // robot1.takeDamage(20);
    return (EXIT_SUCCESS);
}