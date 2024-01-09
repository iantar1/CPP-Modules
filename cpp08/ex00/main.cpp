/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:25:31 by iantar            #+#    #+#             */
/*   Updated: 2024/01/08 14:27:04 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

void vectTest()
{
    std::vector<int>    vect;
    std::vector<int>::iterator iter;

    for (int i = 0; i < 5; i++)
        vect.push_back(i);
    try
    {
        int found =  easyfind(vect, 2);
        std::cout << found;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void    dequeTest()
{
    std::deque<int>  dq;

    for (int i = 0; i < 4; i++)
    {
        std::cout << "add " << (i<<10) << " to the deque\n";
        dq.push_back(i<<10);
    }
    try
    {
        for (int i = 0; i < 5; i++)
        {
            int Index;
            std::cout << (i<<10);
            Index = easyfind(dq, i<<10);
            std::cout << " found at index: " << Index << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void    listTest()
{
    std::list<int> lst;

    lst.push_back(0xff);
    lst.p
    ush_front(0xa1);
    try
    {
        int Index;
        std::cout << 0xff;
        Index = easyfind(lst, 0xff);
        std::cout << " found at index: " << Index << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main(void)
{
    //vectTest();
    //dequeTest();
    //listTest();
    return (0);
}