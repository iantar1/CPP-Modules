/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:23:40 by iantar            #+#    #+#             */
/*   Updated: 2023/11/29 10:30:30 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
    std::string Name;
    
public:
    DiamondTrap(/* args */);
    DiamondTrap(const std::string&);
    ~DiamondTrap(void);
    DiamondTrap(const DiamondTrap&);
    DiamondTrap& operator=(const DiamondTrap&);
    void whoAmI();
};
