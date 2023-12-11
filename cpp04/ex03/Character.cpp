/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:19:08 by iantar            #+#    #+#             */
/*   Updated: 2023/12/11 14:34:00 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"
# include "AMateria.hpp"
# include "Cure.hpp"
# include "Ice.hpp"

int	Character::grb = 0;
t_lst*	Character::lastAddr = NULL;
t_lst*	Character::firstAddr = NULL;

Character::Character()
{
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::Character(const std::string& name): Name(name)
{
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::~Character()
{
	//t_lst	*tmp;

	// for (int i = 0; i < grb; i++)
	// {
	// 	tmp = firstAddr->next;
	// 	delete firstAddr;
	// 	firstAddr = tmp;
	// }
}

Character::Character(Character& other)
{
	*this = other;
}

Character&  Character::operator=(Character& rhs)
{
	if (this == &rhs)
		return (*this);
	this->Name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		if (rhs.slot[i])
		{
			if ((rhs.slot[i]->getType()).compare("cure") == 0)
			{
				this->slot[i] = new Cure;
				garbageCollector(this->slot[i]);
			}
			else if ((rhs.slot[i]->getType()).compare("Ice") == 0)
			{
				this->slot[i] = new Ice;
				garbageCollector(this->slot[i]);
			}
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
		firstAddr->next = NULL;
		grb++;
	}
}
