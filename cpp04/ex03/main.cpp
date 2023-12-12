/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:55:26 by iantar            #+#    #+#             */
/*   Updated: 2023/12/12 10:32:33 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "Character.hpp"
# include "MateriaSource.hpp"
# include <iostream>

void    mainTest()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;
}

void	charTest()
{
	ICharacter *shrif = new Character("shrif");

	for (int i = 0; i < 7; i++)
		shrif->equip(new Ice());

	for (int i = -5; i < 1; i++)
		shrif->unequip(i);

	for (int i = 0; i < 2; i++)
		shrif->equip(new Cure());
	

	for (int i = -2; i < 6; i++)
		shrif->use(i, *shrif);
	delete shrif;	
}

void	materiaTest()
{
	AMateria*	materia1 = new Cure();
	AMateria*	materia2 = new Ice();
	ICharacter*	character1 = new Character();

	Character	objChar("Tashfin");
	ICharacter*	ptrChater = new Character(objChar);

	AMateria* clonedMateria =  materia1->clone();
	std::cout << "clonedMateria's type: " << clonedMateria->getType() << std::endl;
	clonedMateria->use(*character1);

	std::cout << "materia2's type: " << materia2->getType() << std::endl;
	materia2->use(*ptrChater);
	
	*materia1 = *materia2;

	delete materia1;
	delete materia2;
	delete character1;
	delete ptrChater;
	delete clonedMateria;
}

int main()
{
	//mainTest();
	//materiaTest();
	//charTest();
	return 0;
}
