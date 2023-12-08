/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:39 by iantar            #+#    #+#             */
/*   Updated: 2023/12/08 21:04:59 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Dog.hpp"
# define NUM 4

void    deep_copy()
{
    Cat* cat1;
    Cat* cat2;
    //const   Dog* dog;
    
    cat1 = new Cat;
    cat2 = new Cat;
    //dog = new Dog;
    *cat1 = *cat2;
    //delete cat1;
    delete cat2;
    //cat1.
}

int main(void)
{
    deep_copy();
    // const Animal    *animal[NUM/2 + NUM/2];
    // int i;

    // i = 0;

    // while (i < NUM / 2)
    // {
    //     animal[i] = new Dog();
    //     i++;
    // }
    
    // while (i < NUM / 2 + NUM / 2)
    // {
    //     animal[i] = new Cat();
    //     i++;
    // }
        
    // for (int i = 0; i < (NUM / 2 + NUM / 2); i++)
    // {
    //     delete animal[i];
    // }
    return (EXIT_SUCCESS);
}
