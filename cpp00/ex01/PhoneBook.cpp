/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:24:54 by iantar            #+#    #+#             */
/*   Updated: 2023/11/05 11:51:00 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
 
PhoneBook::PhoneBook():anchor(0), num_of_contact(0)
{
   //anchor = 0;
    //num_of_contact = 0;
}

void    PhoneBook::seter()
{
    contact[anchor].set();
    if (num_of_contact < 8)
        num_of_contact++;
    if (anchor == 7)
        anchor = 0;
    else
        anchor++;
    std::cout << "anchor:"<<anchor << std::endl;
}

void    PhoneBook::geter()
{
    int index;
    int i;
    std::string str;

    if (!anchor)
        std::cout << "No contact has been added.\n";
    else
    {
        PhoneBook::header();
        for (i = 0; i < num_of_contact; i++)
            contact[i].get(i);
        index = 11;
        while (index / 10 || index >= (int)num_of_contact)
        {
            std::cout << "enter an index:";
            std::getline(std::cin, str);
            if (std::cin.eof())
                exit(0);
            if (str.empty() || str.size() > 1 || !is_number(str))
                continue ;
            index = str[0] - 48;
        }
        PhoneBook::header();
        contact[index].get(index);
    }
}

void    PhoneBook::header(void)
{
    std::cout << " ___________________________________________\n";
    std::cout << "|   index  |first name| last name| nickname |\n";
    std::cout << "|___________________________________________|\n";
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
    return (EXIT_SUCCESS);
}
