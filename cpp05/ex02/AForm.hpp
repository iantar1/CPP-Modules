/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 09:55:40 by iantar            #+#    #+#             */
/*   Updated: 2023/12/16 11:30:18 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <exception>
# include "Bureaucrat.hpp"

# define DEFAULT 75
class Bureaucrat; 

class AForm
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
	
protected:
	class	SingGradeTooHighException : public std::exception
	{
	public:
		const	char*	what() const throw()
		{
			return ("Sing Grade Too High Exception");
		}
	};

	class	ExecGradeTooLowException : public std::exception
	{
	public:
		const	char*	what() const throw()
		{
			return ("Execution Grade Too Low Exception");
		} 
	};

	class	FormNotSinged : public std::exception
	{
	public:
		const	char*	what() const throw()
		{
			return ("the form is not singed");
		}
	};

	class	FailedOpenFile : public std::exception
	{
	public:
		const	char*	what() const throw()
		{
			return ("failed to open the file");
		}
	};

public:
	AForm();
	AForm(const std::string&, int, int);
	virtual ~AForm();
	AForm(const AForm&);
	AForm&	operator=(const AForm&);

	const std::string&	getName() const;
	bool				getIsSingn() const;
	int					getGradeToSign() const;
	int					getGradeToExec() const;

	void				beSigned(const Bureaucrat&);
	virtual void		execute(Bureaucrat const & executor) const = 0;
};

std::ostream&	operator<<(std::ostream&, const AForm&);
