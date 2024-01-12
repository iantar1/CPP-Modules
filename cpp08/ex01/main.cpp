/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:16:52 by iantar            #+#    #+#             */
/*   Updated: 2024/01/12 21:47:10 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

void    defaultTest()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void    manyNumTest()
{
    Span sp(10);
    std::list<int> lst;

    for (int i = 0; i < 10; i++)
        lst.push_back(i);
    sp.addManyNumbers(lst.begin(), lst.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

int main()
{
    //defaultTest();
    //manyNumTest();
    return (0);
}
