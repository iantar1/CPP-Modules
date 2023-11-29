/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:13:02 by iantar            #+#    #+#             */
/*   Updated: 2023/11/29 10:14:51 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
    ScavTrap(/* args */);
    ScavTrap(std::string);
    ~ScavTrap();

    void guardGate();
};
