/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:00:20 by iantar            #+#    #+#             */
/*   Updated: 2023/11/04 13:03:13 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Zombie
{
private:
    std::string name;
public:
    void announce( void );
    
    Zombie(std::string set_name);
    ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);
