/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:13:02 by iantar            #+#    #+#             */
/*   Updated: 2023/12/03 21:03:28 by iantar           ###   ########.fr       */
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
    ScavTrap(const ScavTrap&);
    ScavTrap&   operator=(const ScavTrap&);

    void attack(const std::string& target);
    void guardGate();
};
