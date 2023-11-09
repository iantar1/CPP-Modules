/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:00:20 by iantar            #+#    #+#             */
/*   Updated: 2023/11/08 11:17:51 by iantar           ###   ########.fr       */
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
    void    setName(std::string _name);
    
    Zombie();
    ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);
