/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:23:23 by iantar            #+#    #+#             */
/*   Updated: 2023/12/10 10:44:28 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "IMateriaSource.hpp"

class MateriaSource: 
{
private:
    /* data */
public:
    MateriaSource(/* args */);
    ~MateriaSource();
    MateriaSource(MateriaSource&);
    MateriaSource&  operator=(MateriaSource&);

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};
