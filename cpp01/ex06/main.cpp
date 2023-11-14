/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:06:30 by iantar            #+#    #+#             */
/*   Updated: 2023/11/14 09:49:33 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int ac, char *av[])
{
    Harl    obj;

    if (ac != 2)
        return (EXIT_FAILURE);
    obj.complain(av[1]);
    return (EXIT_SUCCESS);
}