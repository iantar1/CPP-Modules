/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:39 by iantar            #+#    #+#             */
/*   Updated: 2023/12/12 12:03:37 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"

void    wrong_version(void)
{

    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* i = new WrongCat();

    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;

    i->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
}

void    mainTest()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
}

void    test()
{
    Dog dog;
    Animal* ptr = new Dog(dog);
    Animal* ptr2 = new Dog();
    *ptr2 = *ptr;
    
    std::cout << ptr->getType() << std::endl;
    ptr->makeSound();
    std::cout << ptr2->getType() << std::endl;
    ptr2->makeSound(); 
}

int main(void)
{
    // mainTest();
    // std::cout << "\n\n*****************************************\n\n";
    wrong_version();
    // std::cout << "\n\n*****************************************\n\n";
    // test();
    return (EXIT_SUCCESS);
}