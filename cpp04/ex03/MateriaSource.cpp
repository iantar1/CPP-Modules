/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:23:19 by iantar            #+#    #+#             */
/*   Updated: 2023/12/11 21:38:50 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	grb = 0;
	firstAddr = NULL;
	lastAddr = NULL;
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

MateriaSource::~MateriaSource()
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

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (slot[i])
		{
			delete slot[i];
			slot[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (other.slot[i])
		{
			slot[i] = other.slot[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
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

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type.compare("ice") && type.compare("cure"))
		return (NULL);
	
	for (int i = 0; i < 4; i++)
	{
		if (slot[i] && slot[i]->getType() == type)
			return (slot[i]->clone());
	}
	return (NULL);
}

void	MateriaSource::garbageCollector(AMateria* ptr)
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
