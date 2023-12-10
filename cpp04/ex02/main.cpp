/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:39 by iantar            #+#    #+#             */
/*   Updated: 2023/12/09 11:52:36 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Dog.hpp"
# define NUM 4

void    deep_copy()
{
    Cat    cat1;
    
    Brain*  brain1 = cat1.getBrain();
    brain1->setIdea(0, "idea");
    brain1->setIdea(1, "another idea");
       
    Cat    cat2(cat1);
    Brain*  brain2 = cat2.getBrain();
    brain2->getIdea(0);
    brain2->getIdea(1);
    brain2->getIdea(2);
}

void    mainTest()
{
    const AbstractAnimal    *animal[NUM/2 + NUM/2];
    int i;

    i = 0;

    while (i < NUM / 2)
    {
        animal[i] = new Dog();
        i++;
    }
    
    while (i < NUM / 2 + NUM / 2)
    {
        animal[i] = new Cat();
        i++;
    }
        
    for (int i = 0; i < (NUM / 2 + NUM / 2); i++)
    {
        delete animal[i];
    }
}

int main(void)
{
    //mainTest();
    const Cat  x;
    x.makeSound();
    
    const   AbstractAnimal* dog = new Dog;
    dog->makeSound();
    delete dog;
    return (EXIT_SUCCESS);
}

