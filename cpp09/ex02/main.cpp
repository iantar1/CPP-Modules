/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:56:13 by iantar            #+#    #+#             */
/*   Updated: 2024/01/24 14:53:29 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cerr << "Invalid number of Arguements" << std::endl;
        return (EXIT_FAILURE);
    }
    PmergeMe::setNum(std::string(av[1]));
    return (EXIT_SUCCESS);
}


