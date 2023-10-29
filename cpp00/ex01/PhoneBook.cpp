/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:24:54 by iantar            #+#    #+#             */
/*   Updated: 2023/10/29 12:49:24 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook():anchor(0), num_of_contact(0)
{
   // anchor = 0;
    //num_of_contact = 0;
}

void    PhoneBook::seter()
{
    contact[(int)anchor].set();
    if (num_of_contact < 8)
        num_of_contact++;
    if (anchor == 7)
        anchor = 0;
    else
        anchor++;
}

void    PhoneBook::geter()
{
    int index;

    if (!anchor)
        std::cout << "No contact has been added.\n";
    else
    {
        std::cout << "enter an index:";
        std::cin >> index;
        while (index / 10 || index >= (int)num_of_contact)
        {
            std::cout << "enter an index:";
            std::cin >> index;
        }
        contact[index].get(index);
    }
}

int main(void)
{
    PhoneBook phonebook;
    std::string input;

    std::cout << PROMPT1;
    while (std::getline(std::cin, input))
    {
        if (input == "ADD")
            phonebook.seter();
        else if (input == "SEARCH")
            phonebook.geter();
        else if (input == "EXIT")
            return (0);
        std::cout << PROMPT1;
    }
    return (0);
}
