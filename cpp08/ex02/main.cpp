/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:08:43 by iantar            #+#    #+#             */
/*   Updated: 2024/01/13 15:18:38 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

void defaultTest()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
}

void    test2()
{
    MutantStack<float, std::list<float> >    ms;

    for (float i = 0; i < 10; i++)
        ms.push(i + 0.1 * i + 0.001 * i);
    std::cout << "stack_size: " << ms.size() << std::endl;
    MutantStack<float, std::list<float> >::iterator iter1 = ms.begin();
    MutantStack<float, std::list<float> >::iterator iter2 = ms.end();
    std::cout << "first num : " << *iter1 << std::endl;
    std::cout << "last num : " << *(--iter2) << std::endl;

    std::iter_swap(iter1, iter2);

    std::cout << "first num : " << *iter1 << std::endl;
    std::cout << "last num : " << *iter2 << std::endl;
    
}

int main(void)
{
    //defaultTest();
    //test2();
    return (EXIT_SUCCESS);
}

