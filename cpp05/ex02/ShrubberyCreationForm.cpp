/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:47:35 by iantar            #+#    #+#             */
/*   Updated: 2023/12/26 12:06:56 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), Target("target")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), Target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other.getName(), other.getGradeToSign(), other.getGradeToExec()), Target(other.Target)
{
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	if (this == &rhs)
		return (*this);
	AForm::operator=(rhs);
	Target = rhs.Target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string			shrubberyTree = "      ^\n"
									"         ^^^\n"
									"       ^^^o^^^\n"
									"     ^^^^o^^^o^^\n"
							   		"   ^^^^^^^o^^^^^^^\n"
									"  ^^^^o^^^^^^^^^o^^\n"
									"   ^^^^^^^o^^^^^^^\n"
									"     ^^^^^o^^^o^^\n"
									"       ^^^^^^^^\n"
									"          | |\n"
									"          | |\n"
									"       //_____\\\n";
	
	if (executor.getGrade() > 137)
		throw ExecGradeTooLowException();
	if (getIsSingn() == false)
		throw FormNotSinged();
	std::ofstream outfile((Target + "_shrubbery").c_str());
	if (!outfile.is_open())
		throw FailedOpenFile();
	outfile << shrubberyTree;
	outfile.close();
}
