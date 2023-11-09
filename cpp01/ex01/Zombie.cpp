/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:23:01 by iantar            #+#    #+#             */
/*   Updated: 2023/11/08 11:17:32 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombie::Zombie(std::string set_name)
// {
//     name = set_name;
//     std::cout << "construcor_set_name\n";
// }

Zombie::Zombie(void)
{
    std::cout << "default construcor\n";
}

Zombie::~Zombie()
{
    std::cout << name << ": Good bye!\n";
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void    Zombie::setName(std::string _name)
{
   name = _name;
}