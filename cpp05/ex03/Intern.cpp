/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 21:06:42 by iantar            #+#    #+#             */
/*   Updated: 2023/12/26 12:02:12 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern()
{		
	ptr[0] = &Intern::Shrubbery;
	ptr[1] = &Intern::Robotomy;
	ptr[2] = &Intern::Presid;
}

Intern::Intern(const Intern& other)
{
	ptr[0] = other.ptr[0];
	ptr[1] = other.ptr[1];
	ptr[2] = other.ptr[2];
}

Intern& Intern::operator=(const Intern&)
{
	return (*this);
}

Intern::~Intern()
{
}

AForm*	Intern::Presid(const std::string& target) const
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::Robotomy(const std::string& target) const
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::Shrubbery(const std::string&  target) const
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::makeForm(const std::string& formName, const std::string& target)
{
	const std::string forms[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == formName)
		{
			return (this->*ptr[i])(target);
		}
	}
	return (NULL);
}
