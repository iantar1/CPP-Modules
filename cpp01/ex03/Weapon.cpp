/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:17:55 by iantar            #+#    #+#             */
/*   Updated: 2023/11/17 21:17:38 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type_set): type(type_set)
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