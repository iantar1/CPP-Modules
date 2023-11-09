/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:23:16 by iantar            #+#    #+#             */
/*   Updated: 2023/11/08 12:42:34 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
    Zombie *z;

    z = zombieHorde(2, "hi");
    (void)z;
    //std::cout << "before delete\n";
    //delete[] z;
   //std::cout << "after delete \n";
    return (0);
}
