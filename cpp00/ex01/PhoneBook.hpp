/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:25:00 by iantar            #+#    #+#             */
/*   Updated: 2023/11/01 10:04:45 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# define PROMPT1 "Eter ADD, SEARCH or EXIT:"
typedef char num_t;


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
	bool	is_numbers(std::string str);
	std::string just_ten(std::string str);
};

class PhoneBook
{
private:
	num_t	anchor;
	num_t	num_of_contact;
	Contact	contact[8];

public:
	PhoneBook();
	void    header(void);
	void	seter();
	void	geter();
};

#endif