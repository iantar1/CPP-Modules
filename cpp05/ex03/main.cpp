/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:45:08 by iantar            #+#    #+#             */
/*   Updated: 2023/12/26 12:05:15 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Intern.hpp"

void    test1()
{
}

void    test2()
{
}

void    test3()
{
}

void    test4()
{
}

int main(void)
{
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
    std::cout << rrf->getName() << std::endl;
    std::cout << std::endl  << "-------------------test1-----------------------" << std::endl << std::endl;
    try
    {
        //test1();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl  << "-------------------test2-----------------------" << std::endl << std::endl;
    try {

        //test2();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    } 
    std::cout << std::endl  << "-------------------test3-----------------------" << std::endl << std::endl;
    try {

        //test3();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl  << "-------------------test4-----------------------" << std::endl << std::endl;
    try {

        //test4();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (EXIT_SUCCESS);
}