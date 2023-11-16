/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:00:20 by iantar            #+#    #+#             */
/*   Updated: 2023/11/15 11:45:43 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

class Zombie
{
private:
    std::string name;
public:
    ~Zombie();

public:
    void    announce( void );
    void    setName(std::string _name);
    
};

Zombie* zombieHorde(int N, std::string name);
