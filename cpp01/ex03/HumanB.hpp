/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:39:53 by iantar            #+#    #+#             */
/*   Updated: 2023/11/09 11:18:26 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Weapon.hpp"

class HumanB
{
private:
    Weapon&     weapon;
    std::string name;
public:
    HumanB(std::string name);
    ~HumanB();

public:
    void    setWeapon(Weapon& weapon);
    void	attack(void) const;
};
