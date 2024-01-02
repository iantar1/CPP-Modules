/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:45:08 by iantar            #+#    #+#             */
/*   Updated: 2024/01/02 11:42:23 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

void    test1()
{
    Form    form1("Lalla Maghnia", 70, 70);
    Bureaucrat  bur(75, "Sid Hmida ben Ali");

    std::cout << "Form's name: " << form1.getName() << std::endl;
    std::cout << "Bureaucrat's name: " << bur.getName() << std::endl;
    bur.signForm(form1);
    while (bur.getGrade() > form1.getGradeToSign())
    {
        bur.GradeIncrement();
        std::cout << "incrementing the " << bur.getName() << "'s grade.." << std::endl;
    }
    form1.beSigned(bur);
    bur.signForm(form1);
}

void    test2()
{
    Form    form1("Lalla Maghnia", 70, 70);
    Bureaucrat  bur(75, "Sid Hmida ben Ali");

    std::cout << "Form's name: " << form1.getName() << std::endl;
    std::cout << "Bureaucrat's name: " << bur.getName() << std::endl;
    form1.beSigned(bur);
    bur.signForm(form1);
    while (bur.getGrade() > form1.getGradeToSign())
    {
        bur.GradeIncrement();
        std::cout << "incrementing the " << bur.getName() << "'s grade.." << std::endl;
    }
    form1.beSigned(bur);
    bur.signForm(form1);
}

void    test3()
{
    Form    fr1("badForm",150, 100);
    Form    fr2("badForm",300, 100);
}

void    test4()
{
    Form    fr1("badForm",150, 100);
    Form    fr2("badForm",-1, 100);
}

int main(void)
{
    std::cout << std::endl  << "-------------------test1-----------------------" << std::endl << std::endl;
    try
    {
        test1();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl  << "-------------------test2-----------------------" << std::endl << std::endl;
    try {

        test2();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    } 
    std::cout << std::endl  << "-------------------test3-----------------------" << std::endl << std::endl;
    try {

        test3();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl  << "-------------------test4-----------------------" << std::endl << std::endl;
    try {

        test4();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (EXIT_SUCCESS);
}
