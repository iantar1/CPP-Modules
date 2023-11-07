/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:25:00 by iantar            #+#    #+#             */
/*   Updated: 2023/11/07 11:14:43 by iantar           ###   ########.fr       */
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
	void		set();
	void		get(int index);
	bool		is_numbers(std::string str);
	
	std::string	get_first_name(void) const;
	std::string	get_last_name(void) const;
	std::string	get_nickname(void) const;
	std::string	get_phone_number(void) const;
	std::string	get_darkest_secret(void) const;
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
	void    info(int index) const;
	void    header(void);
	void	seter();
	void	geter();
};

#endif