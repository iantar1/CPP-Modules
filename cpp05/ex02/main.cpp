/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:45:08 by iantar            #+#    #+#             */
/*   Updated: 2024/01/02 15:06:31 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

void    test(AForm& form)
{
    Bureaucrat              bur(1, "burea");
    Bureaucrat              bur2(bur);

    std::cout << form << std::endl;
    std::cout << bur << std::endl;
    form.beSigned(bur);
    form.execute(bur);
    std::cout << form << std::endl;
    for (; form.getGradeToSign() >= bur2.getGrade();)
        bur2.GradeDecrement();
    form.beSigned(bur2);
}


int main(void)
{
    std::cout << std::endl  << "-------------------ShrubberyTest-----------------------" << std::endl << std::endl;
    try
    {
        ShrubberyCreationForm   tree;
        test(tree);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl  << "-------------------RobotomyTest-----------------------" << std::endl << std::endl;
    try {

        RobotomyRequestForm   robo;
        test(robo);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    } 
    std::cout << std::endl  << "-------------------PresidentialPardonTest-----------------------" << std::endl << std::endl;
    try {

        PresidentialPardonForm  pres;
        test(pres);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (EXIT_SUCCESS);
}