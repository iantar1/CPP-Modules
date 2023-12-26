/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 21:06:53 by iantar            #+#    #+#             */
/*   Updated: 2023/12/26 11:53:33 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	AForm*	(Intern::*ptr[3])(const std::string&) const;

public:
	Intern();
	Intern(const Intern&);
	Intern& operator=(const Intern&);
	~Intern();

	AForm*	makeForm(const std::string&, const std::string&);
	AForm*	Presid(const std::string&) const;
	AForm*	Robotomy(const std::string&) const;
	AForm*	Shrubbery(const std::string&) const;
};

