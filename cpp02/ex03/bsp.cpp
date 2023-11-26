/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:13:16 by iantar            #+#    #+#             */
/*   Updated: 2023/11/26 18:28:44 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"
# include "Fixed.hpp"



bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed   w1;
    Fixed   w2;
    Fixed   tmp1;
    Fixed   tmp2;
    Fixed   ax, ay, bx, by, cx, cy, px, py;

    ax = a.getX();
    ay = a.getY();
    bx = b.getX();
    by = b.getY();
    cx = c.getX();
    cy = c.getY();
    px = point.getX();
    py = point.getY();

    
    tmp1 = (ax * (cx - ay) + (py - ay) * (cx - ax) - px * (cy - ay));
    tmp2 = (by - ay) * (cx - ax) - (bx - ax) * (cy - ay);
    w1 = tmp1 / tmp2;
    tmp1 = py - ay - w1 * (by - ay);
    tmp2 = cy - ay;
    w2 = tmp1 / tmp2;
    if (w1 >= Fixed(0) && w2 >= Fixed(0) && w1 + w2 <= Fixed(1))
        return (true);
    return (false);
}