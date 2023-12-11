/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:55:26 by iantar            #+#    #+#             */
/*   Updated: 2023/12/11 16:02:57 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "Character.hpp"
# include "MateriaSource.hpp"
# include <iostream>

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    // ICharacter* me = new Character("me");

    // AMateria* tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);

    // ICharacter* bob = new Character("bob");

    // me->use(0, *bob);
    // me->use(1, *bob);

    // delete bob;
    // delete me;
    delete src;

    return 0;
}
