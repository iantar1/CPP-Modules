/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:24:54 by iantar            #+#    #+#             */
/*   Updated: 2023/08/01 18:26:33 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	just_ten(std::string str)
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

void	display_info(Contact	contact, int index)
{
	std::cout << "|" << just_ten(std::to_string(index)) << "|";
	std::cout << just_ten(contact.first_name) << "|";
	std::cout << just_ten(contact.last_name) << "|";
	std::cout << just_ten(contact.nickname) << "|" << std::endl;
	std::cout << " -------------------------------------------- " << std::endl;
}


int	main(void)
{
	std::string line;
	PhoneBook	phonebook;
	int	index;
	int	saved;
	int	i;

	saved = 0;
	while (std::getline(std::cin, line))
	{
		if (std::cin.eof())
			return (1);
		if (line == "ADD")
		{
			if (saved < 8)
				saved++;
			if (index == 9)
				index = 0;
			std::cout << "first name:";
			std::getline(std::cin, phonebook.contact[index].first_name);
			std::cout << "last name:";
			std::getline(std::cin, phonebook.contact[index].last_name);
			std::cout << "nickname:";
			std::getline(std::cin, phonebook.contact[index].nickname);
			std::cout << "phone number:";
			std::getline(std::cin, phonebook.contact[index].phone_number);
			std::cout << "darkest secret:";
			std::getline(std::cin, phonebook.contact[index].darkest_secret);
			index++;
		}
		else if (line == "SEARCH")
		{
			i = 0;
			std::cout << "| index    |first name| last name| nickname |" << std::endl;
			std::cout << " ------------------------------------------- " << std::endl;
			while (i < saved)
			{
				display_info(phonebook.contact[i], i);
				i++;
			}
		}
		else if (line == "EXIT")
			return (0);
	}
	return (0);
}
