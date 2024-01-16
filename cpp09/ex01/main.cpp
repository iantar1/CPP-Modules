/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:42:31 by iantar            #+#    #+#             */
/*   Updated: 2024/01/16 12:11:57 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cout << "Invalid number of arrgument" << std::endl;
        return (EXIT_FAILURE);
    }
    RPN::ReversePolishNotation(std::string(av[1]));
    //RPN::calculator(std::string(av[1]));

    return (EXIT_SUCCESS);
}