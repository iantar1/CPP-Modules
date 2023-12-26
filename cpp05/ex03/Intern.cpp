/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 21:06:42 by iantar            #+#    #+#             */
/*   Updated: 2023/12/26 10:23:30 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern(/* args */)
{
}

Intern::Intern(const Intern&)
{
}

Intern& Intern::operator=(const Intern&)
{
	
}

Intern::~Intern()
{
}

AForm*	Intern::makeForm(const std::string& formName, const std::string& target)
{
	std::string forms[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
	AForm	(AForm::*ptr[])(const std::string&) = {};
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == formName)
		{
			
		}
	}
}