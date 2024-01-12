/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:08:43 by iantar            #+#    #+#             */
/*   Updated: 2024/01/12 18:36:19 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"
# include <list>

void    VectTest()
{
        MutantStack<int, std::vector<int> > mstack;
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
    MutantStack<int, std::vector<int> >::iterator it5;
    MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
    MutantStack<int, std::vector<int> >::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int, std::vector<int> > s(mstack);
}

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

void    test1()
{
    MutantStack<int>    myStack;
    MutantStack<int>::iterator  myIter;
}

int main(void)
{

    MutantStack<int>    myStack;
    for (int i = 0; i < 10; i++)
        myStack.push(i);

    MutantStack<int>::iterator  myIter;
    myIter = myStack.begin();
    while (myIter != myStack.end())
    {
        std::cout <<  *myIter << " ";
        myIter++;
    }
    std::cout << std::endl;
    while (--myIter != myStack.begin())
    {
        std::cout <<  *myIter << std::endl;
    }
    std::cout <<  *myIter << std::endl;
    MutantStack<int>::iterator  myIter2(myIter);
    return (EXIT_SUCCESS);
}
