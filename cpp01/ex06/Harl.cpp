/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:06:39 by iantar            #+#    #+#             */
/*   Updated: 2023/11/17 18:43:16 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

void Harl::complain(std::string level)
{
    int         i;
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (i = 0; i < 4; i++)
    {
        if (str[i].compare(level) == 0)
            break;
    }
    switch (i)
    {
        case 0:
            debug();
            info();
            warning();
            error();
            break ;
        case 1:
            info();
            warning();
            error();
            break ;
        case 2:
            warning();
            error();
            break ;
        case 3:
            error();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    } 
}

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for ";
    std::cout << "my 7XL-double-cheese-triple-pickle-specialketchup ";
    std::cout << "burger. I really do!\n\n";
}
void Harl::info( void )
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding";
    std::cout << " extra bacon costs more money. You didn’t put ";
    std:: cout << "enough bacon in my burger! If you did,";
    std::cout << " I wouldn’t be asking for more!\n\n";
    
}
void Harl::warning( void )
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some ";
    std::cout << "extra bacon for free. I’ve been coming for";
    std::cout << " years whereas you started working here since last month.\n\n";
}
void Harl::error( void )
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
