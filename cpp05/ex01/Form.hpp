/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 09:55:40 by iantar            #+#    #+#             */
/*   Updated: 2024/01/02 11:09:16 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Bureaucrat.hpp"
# define DEFAULT 75
class Bureaucrat;

class Form
{

private:
	const std::string	Name;
	bool				IsSigned;
	const int			GradeToSign;
	const int			GradeToExec;

private:
	class GradeTooHighException : public std::exception
	{
	public:
		const char*	what() const throw()
		{
			return ("Grade Too High Exception");
		}
	};
	        
	class GradeTooLowException : public std::exception
	{
	public:
		const char*	what() const throw()
		{
			return ("Grade Too Low Exception");
		}
	};
	
public:
	Form();
	Form(const std::string&, int, int);
	~Form();
	Form(const Form&);
	Form&   operator=(const Form&);

	const std::string&	getName() const;
	bool				getIsSingn() const;
	int					getGradeToSign() const;
	int					getGradeToExec() const;

	void				beSigned(const Bureaucrat&);	
};

const std::ostream&	operator<<(std::ostream&, const Form&);
