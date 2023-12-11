/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:23:19 by iantar            #+#    #+#             */
/*   Updated: 2023/12/11 16:06:43 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"


// int	MateriaSource::grb = 0;
// t_lst*	MateriaSource::lastAddr = NULL;
// t_lst*	MateriaSource::firstAddr = NULL;

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource constructor\n";
    grb = 0;
	firstAddr = NULL;
	lastAddr = NULL;
    for (int i = 0; i < 4; i++)
    {
        slot[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    
	AMateria*   tmp;

    for (int i = 0; i < grb; i++)
    {
        //std::cout << firstAddr << "\n";
        //std::cout << grb << "\n";
        tmp = firstAddr->addr;
        std::cout << firstAddr << "\n";
        delete tmp;
        firstAddr = firstAddr->next;
    }
}

MateriaSource::MateriaSource(MateriaSource& )
{
    
}

MateriaSource&  MateriaSource::operator=(MateriaSource&)
{
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
    garbageCollector(m);
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (type.compare("ice") && type.compare("cure"))
        return (NULL);
    
    for (int i = 0; i < 4; i++)
    {
        if (slot[i] && type.compare(slot[i]->getType()) == 0)
            return (slot[i]);
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
		firstAddr->next = NULL;
		grb++;
	}
    std::cout << "grb :" << grb << "\n";
}
