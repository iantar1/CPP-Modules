/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:37:24 by iantar            #+#    #+#             */
/*   Updated: 2023/11/11 11:26:17 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "includes.hpp"

int main(int ac, char *av[])
{
    if (ac != 4)
        return (1);
    std::ifstream   inputFile(av[1]);
    if (!inputFile.is_open())
    {
        std::cerr << "Can't open the file " << av[1] << std::endl;
        return (EXIT_FAILURE);
    }
    std::string fileName = std::string(av[1]) + ".replace";
    std::ofstream   outputFile(fileName.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Can't open the file " << fileName << std::endl;
        inputFile.close();
        return (EXIT_FAILURE);
    }
    
    return (0);
}