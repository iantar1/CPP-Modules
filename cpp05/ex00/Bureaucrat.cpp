/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:45:19 by iantar            #+#    #+#             */
/*   Updated: 2023/12/14 17:42:30 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): Name("Iantar"), Grade(150)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(int grade): Name("Iantar")
{
	try 
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			Grade = grade;
	}
	catch (Bureaucrat::GradeTooHighException& ex)
	{
		std::cout << ex.what();
	}
	catch (Bureaucrat::GradeTooLowException& ex)
	{
		std::cout << ex.what();
	}
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

void	Bureaucrat::setGrade(int grade)
{
	if (grade >= 1 && grade <= 150)
		this->Grade = grade;
}

void    Bureaucrat::GradeIncrement()
{
	try 
	{
		if (getGrade() > 1)
			setGrade(getGrade() - 1);
		else
		{
			throw Bureaucrat::GradeTooLowException();
		}	
	}
	catch (Bureaucrat::GradeTooLowException& ex)
	{
		std::cout << ex.what();
	}
}

void    Bureaucrat::GradeDecrement()
{
	try 
	{
		if (getGrade() < 150)
			setGrade(getGrade() + 1);
		else
		{
			throw Bureaucrat::GradeTooHighException();
		}	
	}
	catch (Bureaucrat::GradeTooHighException& ex)
	{
		std::cout << ex.what();
	}
	
}
