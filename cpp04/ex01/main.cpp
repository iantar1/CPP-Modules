/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:39 by iantar            #+#    #+#             */
/*   Updated: 2023/12/12 11:58:45 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Dog.hpp"
# define NUM 2

void    deep_copy()
{
    Animal* a = new Cat();
    Animal* b = new Cat();
    
    *a = *b;
    
    Cat    cat1;
    Brain*  brain1 = cat1.getBrain();
    brain1->setIdea(0, "idea");
    brain1->setIdea(1, "another idea");
       

    Cat    cat2(cat1);
    std::cout << cat1.getType() << std::endl;
    std::cout << cat2.getType() << std::endl;
    
    Brain*  brain2 = cat2.getBrain();
    brain2->getIdea(0);
    brain2->getIdea(1);
    brain2->getIdea(2);
    delete a;
    delete b;
}

void    mainTest()
{
    const Animal    *animal[2 * NUM];
    int i;

    i = 0;

    while (i < NUM)
    {
        animal[i] = new Dog();
        i++;
    }
    
    while (i < 2 * NUM)
    {
        animal[i] = new Cat();
        i++;
    }
        
    for (int i = 0; i < 2 * NUM; i++)
    {
        delete animal[i];
    }
}

int main(void)
{
    //mainTest();
   // deep_copy();
    return (EXIT_SUCCESS);
}
