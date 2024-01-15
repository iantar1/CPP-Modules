/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:24:48 by iantar            #+#    #+#             */
/*   Updated: 2024/01/15 11:13:13 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

int main(int ac, char *av[])
{

    if (ac != 2)
    {
        std::cout << "Error: Invalid number of arguments" << std::endl;
        return (EXIT_FAILURE);
    }

    std::ifstream   fcsv("cpp_09/data.csv");
    std::ifstream   inp(av[1]);
    if (!fcsv.is_open() || !inp.is_open())
    {
        std::cout << "Error: can't open the file" << std::endl;
        return (EXIT_FAILURE);
    }
    bitcoinEx(inp, fcsv);
    fcsv.close();
    inp.close();
    return (EXIT_SUCCESS);
}
