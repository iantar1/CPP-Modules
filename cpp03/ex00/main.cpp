/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:54:06 by iantar            #+#    #+#             */
/*   Updated: 2023/12/03 17:02:41 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"


int main(void)
{
    ClapTrap    robot1;

    ClapTrap    robot2 = robot1;
    for (int i = 0; i < 11; i++)
        robot1.attack("x");
    robot1.beRepaired(55);
    robot1.takeDamage(45);
    return (EXIT_SUCCESS);
}