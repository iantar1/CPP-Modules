/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 09:55:35 by iantar            #+#    #+#             */
/*   Updated: 2023/12/16 11:20:04 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

AForm::AForm() : Name("AForm"), IsSigned(false), GradeToSign(DEFAULT), GradeToExec(DEFAULT)
{
}

AForm::AForm(const std::string& name, int SignGrde, int ExecGrade) : Name(name), IsSigned(false), GradeToSign(SignGrde), GradeToExec(ExecGrade)
{
	if (SignGrde < 1 || ExecGrade < 1)
		throw AForm::GradeTooHighException();
	if (SignGrde > 150 || ExecGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm()
{
}

AForm::AForm(const AForm& other): Name(other.Name), IsSigned(other.IsSigned), GradeToSign(other.GradeToSign), GradeToExec(other.GradeToExec)
{
}

AForm&   AForm::operator=(const AForm& rhs)
{
	if (this == &rhs)
		return (*this);
	IsSigned = rhs.IsSigned;
	return (*this);
}

const std::string&	AForm::getName() const
{
	return (Name);
}

bool	AForm::getIsSingn() const
{
	return (IsSigned);
}

int	AForm::getGradeToSign() const
{
	return (GradeToSign);
}

int	AForm::getGradeToExec() const
{
	return (GradeToExec);
}

void	AForm::beSigned(const Bureaucrat& bure)
{
	if (bure.getGrade() <= GradeToSign)
	{
		IsSigned = true;
	}
	else
		throw AForm::GradeTooLowException();
}

const std::ostream&	operator<<(std::ostream& os, const AForm& Aform)
{
	os << Aform.getName() << " , Sign Grade: ";
	os << Aform.getGradeToSign() << " , Exec Grade: ";
	os << Aform.getGradeToExec() << " , signed status: ";
	os << Aform.getIsSingn();
	return (os);
}