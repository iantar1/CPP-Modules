/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:22:42 by iantar            #+#    #+#             */
/*   Updated: 2023/11/09 09:53:06 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *n_zombies;
    int     i;

    n_zombies = new Zombie[N];
    for (i = 0; i < N; i++)
        n_zombies[i].setName(name);
    return (n_zombies);
}
