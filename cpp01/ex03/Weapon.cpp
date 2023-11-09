/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:17:55 by iantar            #+#    #+#             */
/*   Updated: 2023/11/09 11:23:13 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type_set): type(type_set)
{
}

Weapon::~Weapon()
{
}

const	std::string& Weapon::getType(void)  const
{
	return (type);
}

void	Weapon::setType(std::string	newType)
{
	type = newType;
}