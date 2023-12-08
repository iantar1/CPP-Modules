/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:13:02 by iantar            #+#    #+#             */
/*   Updated: 2023/12/03 21:00:40 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string);
    ~ScavTrap();
    ScavTrap(const ScavTrap&);
    ScavTrap&   operator=(const ScavTrap&);
    void attack(const std::string& target);

    void guardGate();
};
