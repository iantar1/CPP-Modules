/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:47:21 by iantar            #+#    #+#             */
/*   Updated: 2023/12/25 15:54:53 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("AForm", 25, 5), Target("target")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("AForm", 25, 5), Target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other.getName(), other.getGradeToSign(), other.getGradeToExec()), Target(other.Target)
{
}

PresidentialPardonForm&    PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
    if (this == &rhs)
        return (*this);
    AForm::operator=(rhs);
    Target = rhs.Target;
    return (*this);
}
    
PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > 45) 
        throw ExecGradeTooLowException();
    if (getIsSingn() == false)
		throw FormNotSinged();
    std::cout << Target << " has been pardoned by Zaphod Beeblebrox\n";
}