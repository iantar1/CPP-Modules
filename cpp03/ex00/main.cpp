/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:54:06 by iantar            #+#    #+#             */
/*   Updated: 2023/12/02 11:24:42 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    robot1("Tashfin");
    robot1.attack("x");
    ClapTrap    robot2 = robot1;
    robot1.attack("x");
    robot1.attack("x");
    robot1.attack("x");
    robot1.attack("x");
    robot1.attack("x");
    robot1.attack("x");
    robot1.attack("x");
    robot1.attack("x");
    
    //robot1.takeDamage(1);
    //robot1.beRepaired(1);
    return (EXIT_SUCCESS);
}