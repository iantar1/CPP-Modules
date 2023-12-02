/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:34:44 by iantar            #+#    #+#             */
/*   Updated: 2023/12/01 10:45:07 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include "Point.hpp"
#include <stdlib.h> 

int main(void)
{
    Point   a(0, 0), b(1.52, 0), c(0, 2.72), p(0, 0);

    
    if (bsp(a, b, c, p) == true)
        std::cout << "Inside\n";
    else
        std::cout << "Outside\n";
    return 0;
}
