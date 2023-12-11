/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:55:26 by iantar            #+#    #+#             */
/*   Updated: 2023/12/11 21:43:56 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "Character.hpp"
# include "MateriaSource.hpp"
# include <iostream>

// void    mainTest()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
    
//     ICharacter* me = new Character("me");

//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     ICharacter* bob = new Character("bob");

//     me->use(0, *bob);
//     me->use(1, *bob);

//     delete bob;
//     delete me;
//     delete src;
// }

// int main()
// {
//     MateriaSource   obj1;
//     AMateria    *matr1;

//     obj1.learnMateria(new Ice());
//     matr1 = obj1.createMateria("ice");
    
//     std::cout << matr1->getType();
//     //MateriaSource   obj2(obj1);
    
//     return 0;
// }



# include "Ice.hpp"
# include "Cure.hpp"
# include "MateriaSource.hpp"
# include "Character.hpp"

void	basic_test1()
{
	AMateria *ptr1 = new Ice();
	AMateria *ptr2 = new Cure();

	std::cout << "Before:" << std::endl << std::endl;
	std::cout << ptr1->getType() << std::endl;
	std::cout << ptr2->getType() << std::endl;
	*ptr1 = *ptr2;

	std::cout << "After:" << std::endl << std::endl;
	std::cout << ptr1->getType() << std::endl;
	std::cout << ptr2->getType() << std::endl;

	delete ptr1;
	delete ptr2;
}

void	basic_test2()
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

void	basic_test3()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	delete src;
}

void	basic_test4()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(NULL);

	ICharacter *me = new Character("me");
	me->equip(NULL);
	delete src;
	delete me;
}

void	basic_test5()
{
	ICharacter *bob = new Character("bob");

	bob->equip(new Ice());
	bob->equip(new Ice());
	bob->equip(new Ice());
	bob->equip(new Ice());
	bob->equip(new Ice());
	bob->equip(new Ice());
	delete bob;	
}

void	basic_test6()
{
	ICharacter *bob = new Character("bob");

	bob->equip(new Ice());
	bob->unequip(0);
	delete bob;
}

int main()
{
	basic_test1();
	basic_test2();
	basic_test3();
	basic_test4();
	basic_test5();
	basic_test6();
	return 0;
}
