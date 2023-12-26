/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:47:27 by iantar            #+#    #+#             */
/*   Updated: 2023/12/26 12:07:14 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), Target("target")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), Target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other.getName(), other.getGradeToSign(), other.getGradeToExec()), Target(other.Target)
{
}

RobotomyRequestForm&    RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
    if (this == &rhs)
        return (*this);
    AForm::operator=(rhs);
    Target = rhs.Target;
    return (*this);
}
    
RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > 45) 
        throw ExecGradeTooLowException();
    if (getIsSingn() == false)
		throw FormNotSinged();
    std::cout << "pfffff  shshshs trrrrrr\n";
    if (std::rand() % 2)
		std::cout << Target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "the robotomy failed" << std::endl;
}
