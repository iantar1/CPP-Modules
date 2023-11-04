/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:13:35 by iantar            #+#    #+#             */
/*   Updated: 2023/11/04 11:36:52 by iantar           ###   ########.fr       */
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

void randomChump(std::string name);
Zombie* newZombie(std::string name);
