/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:22:42 by iantar            #+#    #+#             */
/*   Updated: 2023/11/15 11:45:48 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *horde;
    int     i;

    horde = new Zombie[N];
    for (i = 0; i < N; i++)
        horde[i].setName(name);
    return (horde);
}
