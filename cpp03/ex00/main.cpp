/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:54:06 by iantar            #+#    #+#             */
/*   Updated: 2023/11/27 11:21:09 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    robot1;

    robot1.attack("3bbas");
    robot1.beRepaired(10);
    robot1.takeDamage(20);
    return (EXIT_SUCCESS);
}