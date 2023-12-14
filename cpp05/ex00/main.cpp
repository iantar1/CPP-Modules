/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:45:08 by iantar            #+#    #+#             */
/*   Updated: 2023/12/14 17:46:24 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

void    mainTest()
{
    Bureaucrat  bur1(150);
    Bureaucrat  bur2(bur1);

    std::cout << "The name is: " << bur1.getName() << std::endl;
    std::cout << "The grade before increment : " << bur1.getGrade() << std::endl;
    bur1.GradeIncrement();
    std::cout << "The grade after increment : " << bur1.getGrade() << std::endl;
    bur2.GradeDecrement();
}

void    badGradeTest()
{
    Bureaucrat  bur1(1);
    Bureaucrat  bur2(-1);
    Bureaucrat  bur3(201);
    
    Bureaucrat  burX(bur1);
    burX.GradeIncrement();
}

void    insertion()
{
    Bureaucrat  bur;
    Bureaucrat  bur1(bur);
    
    std::cout << bur << "      " << bur1 << std::endl;
    std::cout << bur.getGrade() << std::endl;
    std::cout << bur.getName() << std::endl;
}

int main(void)
{
    //mainTest();
    //badGrade();
    //insertion();
    
    return (EXIT_SUCCESS);
}