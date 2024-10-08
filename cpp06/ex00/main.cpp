/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:40:36 by iantar            #+#    #+#             */
/*   Updated: 2024/01/05 19:51:05 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
        return ((std::cout << "Invalid number of arguments\n"), EXIT_FAILURE);
    ScalarConverter::convert(av[1]);
    return (EXIT_SUCCESS);
}
