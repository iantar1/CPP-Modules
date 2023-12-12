/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:19:08 by iantar            #+#    #+#             */
/*   Updated: 2023/12/12 15:16:08 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"
# include "AMateria.hpp"
# include "Cure.hpp"
# include "Ice.hpp"

Character::Character():grb(0), firstAddr(NULL), lastAddr(NULL)
{
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::Character(const std::string& name): Name(name), grb(0), firstAddr(NULL), lastAddr(NULL)
{
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::~Character()
{
	t_lst*      lst_tmp;

	for (int i = 0; i < grb; i++)
	{
		delete firstAddr->addr;
		lst_tmp = firstAddr->next;
		delete firstAddr;
		firstAddr = lst_tmp;
	}
}

Character::Character(const Character& other): grb(0), firstAddr(NULL), lastAddr(NULL)
{
	*this = other;
}

Character&  Character::operator=(const Character& rhs)
{
	if (this == &rhs)
		return (*this);
	this->Name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		if (rhs.slot[i])
		{
			this->slot[i] = rhs.slot[i]->clone();
			garbageCollector(this->slot[i]);
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (Name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (slot[i] == m)
			return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (slot[i] == NULL)
		{
			slot[i] = m;
			garbageCollector(m);
			return ;
		}
	}
	delete m;
}

void Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0)
	{
		slot[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx >= 0 && slot[idx])
	{
		slot[idx]->use(target);
	}
}

void	Character::garbageCollector(AMateria* ptr)
{
	if (!grb)
	{
		firstAddr = new t_lst;
		firstAddr->addr = ptr;
		firstAddr->next = NULL;
		lastAddr = firstAddr;
		grb++;
	}
	else
	{
		lastAddr->next = new t_lst;
		lastAddr = lastAddr->next;
		lastAddr->addr = ptr;
		lastAddr->next = NULL;
		grb++;
	}
}
