/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 09:55:35 by iantar            #+#    #+#             */
/*   Updated: 2023/12/16 11:20:04 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form() : Name("Form"), IsSigned(false), GradeToSign(DEFAULT), GradeToExec(DEFAULT)
{
}

Form::Form(const std::string& name, int SignGrde, int ExecGrade) : Name(name), IsSigned(false), GradeToSign(SignGrde), GradeToExec(ExecGrade)
{
	if (SignGrde < 1 || ExecGrade < 1)
		throw Form::GradeTooHighException();
	if (SignGrde > 150 || ExecGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form::Form(const Form& other): Name(other.Name), IsSigned(other.IsSigned), GradeToSign(other.GradeToSign), GradeToExec(other.GradeToExec)
{
}

Form&   Form::operator=(const Form& rhs)
{
	if (this == &rhs)
		return (*this);
	IsSigned = rhs.IsSigned;
	return (*this);
}

const std::string&	Form::getName() const
{
	return (Name);
}

bool	Form::getIsSingn() const
{
	return (IsSigned);
}

int	Form::getGradeToSign() const
{
	return (GradeToSign);
}

int	Form::getGradeToExec() const
{
	return (GradeToExec);
}

void	Form::beSigned(const Bureaucrat& bure)
{
	if (bure.getGrade() <= GradeToSign)
	{
		IsSigned = true;
	}
	else
		throw Form::GradeTooLowException();
}

const std::ostream&	operator<<(std::ostream& os, const Form& form)
{
	os << form.getName() << " , Sign Grade: ";
	os << form.getGradeToSign() << " , Exec Grade: ";
	os << form.getGradeToExec() << " , signed status: ";
	os << form.getIsSingn();
	return (os);
}