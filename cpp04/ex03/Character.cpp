/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:19:08 by iantar            #+#    #+#             */
/*   Updated: 2023/12/10 17:37:53 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
	grb = 0;
}

Character::Character(std::string& name): Name(name)
{
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (slot[i])
		{
			delete slot[i];
		}
	}
}

Character::Character(Character&)
{
}

Character&  Character::operator=(Character&)
{
	
}

std::string const & Character::getName() const
{
	
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (slot[i] == NULL)
		{
			slot[i] = m;
			garbageCollector(m);
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0 && slot[idx] != NULL)
	{
		slot[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	
}

void	Character::garbageCollector(AMateria* ptr)
{
	if (!grb)
	{
		
	}
}