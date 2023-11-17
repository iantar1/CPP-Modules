/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:34:06 by iantar            #+#    #+#             */
/*   Updated: 2023/11/16 15:33:47 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *z;
    
    randomChump("l7aj matish");
    z = newZombie("am3dor");
    z->announce();
    delete z;
    return (0);
}
