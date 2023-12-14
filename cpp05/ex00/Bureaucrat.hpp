/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:45:13 by iantar            #+#    #+#             */
/*   Updated: 2023/12/14 15:57:08 by iantar           ###   ########.fr       */
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

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(int);
	Bureaucrat(const Bureaucrat&);

	Bureaucrat& operator=(const Bureaucrat&);

	const std::string&  getName()   const;
	int					getGrade() const;
	void				setGrade(int grade);
	void				GradeIncrement();
	void				GradeDecrement();    
	
	class GradeTooHighException : public std::exception
	{
	public:
		const char*	what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW
		{
			return ("Grade Too High Exception\n");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char*	what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW
		{
			return ("Grade Too Low Exception\n");
		}
	};

};

std::ostream&    operator<<(std::ostream&, const Bureaucrat&);
