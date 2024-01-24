/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:56:13 by iantar            #+#    #+#             */
/*   Updated: 2024/01/24 17:46:54 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

int main(int ac, char *av[])
{
    if (ac < 2)
    {
        std::cerr << "Invalid number of Arguements" << std::endl;
        return (EXIT_FAILURE);
    }
    try
    {
        for (int i = 1; i < ac; i++)
            PmergeMe::setNum(std::string(av[i]));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (EXIT_SUCCESS);
}


