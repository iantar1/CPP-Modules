/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:58:47 by iantar            #+#    #+#             */
/*   Updated: 2023/11/06 10:58:22 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Contact::Contact()
// {
//     //
// }

// Contact::~Contact()
// {
//     //
// }

void    Contact::get(int index)
{
    std::stringstream intToString;

    intToString << index;
    std::cout << "|" << just_ten(intToString.str()) << "|";
    std::cout << just_ten(first_name) << "|";
    std::cout << just_ten(last_name) << "|";
    std::cout << just_ten(nickname) << "|" << std::endl;
    std::cout << "|__________|__________|__________|__________|\n";
}

std::string Contact::just_ten(std::string str)
{
    int	i;

	if (str.size() < 10)
	{
		i = str.size();
		while (i++ < 10)
			str += " ";
		return (str);
	}
	else
		return (str.substr(0, 9) + ".");
}


void    Contact::set()
{
    
    while (true)
    {
        std::cout << "first name: ";
        if (!std::getline(std::cin, first_name))
            exit (0);
        if (!first_name.empty())
            break ;
    }
    while (true)
    {
        std::cout << "last name: ";
        if (!std::getline(std::cin, last_name))
            exit (0);
        if (!last_name.empty())
            break ;
    }
    while (true)
    {
        std::cout << "nickname: ";
        if (!std::getline(std::cin, nickname))
            exit (0);
        if (!nickname.empty())
            break ;
    }
    while (true)
    {
        std::cout << "phone number: ";
        if (!std::getline(std::cin, phone_number))
            exit (0);
        if ((!phone_number.empty() || is_number(phone_number)))
            break ;
    }
    while (true)
    {
        std::cout << "darkest secret: ";
        if (!std::getline(std::cin, darkest_secret))
            exit (0);
        if (!darkest_secret.empty())
            break ;
    }
}

bool    is_number(std::string str)
{
    unsigned int   i;

    i = 0;
    for (i = 0; i < (unsigned int)str.size(); i++)
    {
        if (!isdigit(str[i]))
            return (0);
    }
    return (1);
}
