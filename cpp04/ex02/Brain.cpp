/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:58:29 by iantar            #+#    #+#             */
/*   Updated: 2023/12/09 10:10:25 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain's constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain's destructor" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain's copy constructor" << std::endl;
    *this = other;
}

Brain&  Brain::operator=(const Brain& rhs)
{
    std::cout << "Brain's copy asignment operator" << std::endl;
    if (this == &rhs)
        return (*this);
    for (int i = 0; i < 100; i++)
        ideas[i] = rhs.ideas[i];
    return (*this);
}

const std::string& Brain::getIdea(int index) const
{
    if (index < 0)
        index = (-1) * index;
    return (ideas[index % 100]);
}

void    Brain::setIdea(int index, const std::string& str)
{
    if (index < 0)
        index = (-1) * index;
    ideas[index % 100] = str;
}
