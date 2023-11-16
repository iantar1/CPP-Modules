/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:23:16 by iantar            #+#    #+#             */
/*   Updated: 2023/11/15 11:51:20 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
    Zombie *horde;
    int     i;

    horde = zombieHorde(3, "L7aj Mattish");
    for (i = 0; i < 3; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}
