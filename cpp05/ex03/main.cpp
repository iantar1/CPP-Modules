/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:45:08 by iantar            #+#    #+#             */
/*   Updated: 2024/01/02 15:52:21 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Intern.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

void    test(const std::string& formName, const std::string& target)
{
    Bureaucrat  bur(10 ,"Buro");
    Intern someRandomIntern;
    try
    {
        AForm* rrf;
        rrf = someRandomIntern.makeForm(formName, target);
        if (rrf == NULL)
        {
            std::cout << "INvalid formName" << std::endl;
            return ;
        }
        std::cout << "Intern creates " << rrf->getName() << std::endl; 
        bur.signForm(*rrf);
		rrf->beSigned(bur);
		bur.executeForm(*rrf);
		std::cout << *rrf;
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}

int main(void)
{
    std::cout << std::endl  << "-------------------ShrubberyCreation-----------------------" << std::endl << std::endl;
    test("ShrubberyCreationForm", "BnLbbnna");
    std::cout << std::endl  << "-------------------RobotomyRequest-----------------------" << std::endl << std::endl;
    test("RobotomyRequestForm", "Tesla");
    std::cout << std::endl  << "-------------------PresidentialPardon-----------------------" << std::endl << std::endl;
    test("PresidentialPardonForm", "BnBttota");
    std::cout << std::endl  << "-------------------INvalid-----------------------" << std::endl << std::endl;
    test("Invalid", "nvalid");

    return (EXIT_SUCCESS);
}