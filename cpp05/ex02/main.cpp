/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:45:08 by iantar            #+#    #+#             */
/*   Updated: 2024/01/02 12:15:11 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"


void    test2()
{
}

void    test3()
{
}

void    test4()
{
}

void    ShrubberyTest()
{
    ShrubberyCreationForm   tree;
    Bureaucrat              bur(1, "ⵄⵙⵙⵓ ⵓⴱⴰⵙⵍⴰⵎ");

    std::cout << bur.getGrade() << std::endl;
    tree.beSigned(bur);`
    tree.execute(bur);

}
int main(void)
{
    std::cout << std::endl  << "-------------------ShrubberyTest-----------------------" << std::endl << std::endl;
    try
    {
        ShrubberyTest();
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