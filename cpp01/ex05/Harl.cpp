/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:43:48 by iantar            #+#    #+#             */
/*   Updated: 2023/11/13 11:43:46 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

void Harl::complain(std::string level)
{
    void    (Harl::*ptr[])(void) = {&Harl::debug, &Harl::info
    , &Harl::warning, &Harl::error};
    Harl    obj;
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         i;

    for (i = 0; i < 4; i++)
    {
        if (str[i].compare(level) == 0)
            (obj.*ptr[i])();
    } 
}

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for ";
    std::cout << "my 7XL-double-cheese-triple-pickle-specialketchup ";
    std::cout << "burger. I really do!\n";
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding";
    std::cout << " extra bacon costs more money. You didn’t put ";
    std:: cout << "enough bacon in my burger! If you did,";
    std::cout << " I wouldn’t be asking for more!\n";
    
}
void Harl::warning( void )
{
    std::cout << "I think I deserve to have some ";
    std::cout << "extra bacon for free. I’ve been coming for";
    std::cout << " years whereas you started working here since last month.";
}
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}