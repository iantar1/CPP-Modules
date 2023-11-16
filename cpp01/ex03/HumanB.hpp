/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:39:53 by iantar            #+#    #+#             */
/*   Updated: 2023/11/15 14:39:50 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Weapon.hpp"

class HumanB
{
private:
	Weapon*		weapon;
	std::string name;
public:
	HumanB(std::string name);
	~HumanB();

public:
	void	setWeapon(Weapon& _weapon);
	void	attack(void) const;
};
