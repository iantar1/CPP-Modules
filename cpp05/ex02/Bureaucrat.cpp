/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:45:19 by iantar            #+#    #+#             */
/*   Updated: 2023/12/16 14:43:53 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): Name("Bureaucrat"), Grade(150)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(int grade, const std::string& name): Name(name), Grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other):Name(other.getName()), Grade(other.getGrade())
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	if (this == &rhs)
		return (*this);
	this->Grade = rhs.getGrade();
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName();
	os << ", bureaucrat grade ";
	os << bureaucrat.getGrade();
	return (os);
}

const std::string&  Bureaucrat::getName()   const
{
	return (this->Name);
}

int Bureaucrat::getGrade() const
{
	return (this->Grade);
}

void    Bureaucrat::GradeIncrement()
{
	if (getGrade() == 1)
		throw Bureaucrat::GradeTooLowException();
	Grade--;	
}

void    Bureaucrat::GradeDecrement()
{
	if (getGrade() == 150)
		throw Bureaucrat::GradeTooHighException();
	Grade++;
}

void	Bureaucrat::signForm(const AForm& form)
{
	if (form.getIsSingn())
		std::cout << Name << " signed " << form.getName() << "'s form" << std::endl;
	else
	{
		std::cout << Name << " couldn't sign  " << form.getName() << "'s form because " << " its grade not higher enough " << std::endl;
	}
}
