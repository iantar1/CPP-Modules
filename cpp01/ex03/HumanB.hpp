/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:39:53 by iantar            #+#    #+#             */
/*   Updated: 2023/11/17 18:38:21 by iantar           ###   ########.fr       */
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

public:
	void	setWeapon(Weapon& _weapon);
	void	attack(void) const;
};
