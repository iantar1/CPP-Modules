/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:34:44 by iantar            #+#    #+#             */
/*   Updated: 2023/11/26 18:12:12 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include "Point.hpp"
#include <stdlib.h> 

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point   a(0, 0), b(1.52, 0), c(0, 2.72), p(-0.66, -0.64);

    
    if (bsp(a, b, c, p) == true)
        std::cout << "\n\n\nInside\n\n\n\n";
    else
        std::cout << "\n\n\nOutside\n\n\n\n";
    return 0;
}
