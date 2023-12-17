/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:45:13 by iantar            #+#    #+#             */
/*   Updated: 2023/12/16 11:31:36 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <exception>
#include <cstdlib>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string   Name;
	int                 Grade;

	class GradeTooHighException : public std::exception
	{
	public:
		const char*	what() const throw ()
		{
			return ("Grade Too High Exception");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char*	what() const throw ()
		{
			return ("Grade Too Low Exception");
		}
	};

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(int, const std::string&);
	Bureaucrat(const Bureaucrat&);
	Bureaucrat& operator=(const Bureaucrat&);

	const std::string&  getName()   const;
	int					getGrade() const;

	void				GradeIncrement();
	void				GradeDecrement();

	void				signForm(const Form&);
};

std::ostream&    operator<<(std::ostream&, const Bureaucrat&);
