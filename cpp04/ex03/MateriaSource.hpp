/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:23:23 by iantar            #+#    #+#             */
/*   Updated: 2023/12/11 16:00:01 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"

class MateriaSource: public IMateriaSource
{
private:
    AMateria*   slot[4];
    int	grb;
	t_lst	*firstAddr;
	t_lst	*lastAddr;

public:
    MateriaSource(/* args */);
    ~MateriaSource();
    MateriaSource(MateriaSource&);
    MateriaSource&  operator=(MateriaSource&);

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
    
    void	garbageCollector(AMateria*);
};
