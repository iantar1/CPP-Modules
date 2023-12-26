/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 21:06:53 by iantar            #+#    #+#             */
/*   Updated: 2023/12/26 10:25:33 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	/* data */
public:
	Intern();
	Intern(const Intern&);
	Intern& operator=(const Intern&);
	~Intern();

	AForm*	makeForm(const std::string&, const std::string&);
	PresidentialPardonForm*	Presid(const std::string&);
	RobotomyRequestForm*	Robotomy(const std::string&);
	ShrubberyCreationForm*	Shrubbery(const std::string&);
};

