/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:39:58 by iantar            #+#    #+#             */
/*   Updated: 2023/11/09 10:52:17 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Weapon.hpp"

class HumanA
{
private:
	Weapon&		weapon;
	std::string	name;
public:
	HumanA(std::string name, Weapon& setWeapon);
	~HumanA();

public:
	void	attack(void) const;
};
