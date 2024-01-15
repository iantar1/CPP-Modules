/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:45:13 by iantar            #+#    #+#             */
/*   Updated: 2024/01/13 18:05:53 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <exception>
#include <cstdlib>

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

};

std::ostream&    operator<<(std::ostream&, const Bureaucrat&);
