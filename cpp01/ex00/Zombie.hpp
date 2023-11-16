/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:13:35 by iantar            #+#    #+#             */
/*   Updated: 2023/11/15 09:56:27 by iantar           ###   ########.fr       */
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
    Zombie();
    ~Zombie();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);
