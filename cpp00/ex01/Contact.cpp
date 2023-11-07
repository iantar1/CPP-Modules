/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:58:47 by iantar            #+#    #+#             */
/*   Updated: 2023/11/07 11:24:50 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact()
{
    //
}

Contact::~Contact()
{
    //
}

std::string    Contact::get_first_name(void) const
{
    return (first_name);
}

std::string    Contact::get_last_name(void) const
{
    return (last_name);
}

std::string    Contact::get_nickname(void) const
{
    return (nickname);
}

std::string    Contact::get_phone_number(void) const
{
    return (phone_number);
}

std::string    Contact::get_darkest_secret(void) const
{
    return (darkest_secret);
}


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
        if (is_number(phone_number))
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
    if (str.empty())
        return (false);
    for (i = 0; i < (unsigned int)str.size(); i++)
    {
        if (!isdigit(str[i]))
            return (false);
    }
    return (true);
}
