/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:25:00 by iantar            #+#    #+#             */
/*   Updated: 2023/11/06 10:58:25 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cstdlib>
#include <sstream>
# define PROMPT1 "Eter ADD, SEARCH or EXIT:"
typedef char num_t;

bool	is_number(std::string str);

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	Contact();
	~Contact();
	void	set();
	void	get(int index);
	//bool	is_numbers(std::string str);
	std::string just_ten(std::string str);
};

class PhoneBook
{
private:
	int	anchor;
	int	num_of_contact;
	Contact	contact[8];

public:
	PhoneBook();
	void    header(void);
	void	seter();
	void	geter();
};

#endif