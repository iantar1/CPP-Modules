/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:13:27 by iantar            #+#    #+#             */
/*   Updated: 2023/11/26 14:23:35 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"
# include "Fixed.hpp"

Point::Point(void):x(0), y(0)
{
}

Point::~Point()
{
}

Point::Point(const float f1, const float f2):x(f1), y(f2)
{
}

const   Fixed&   Point::getX(void) const
{
    return (x);
}

const   Fixed&   Point::getY(void) const
{
    return (y);
}

Point::Point(const Point& obj):x(obj.x), y(obj.y)
{
}

Point&   Point::operator=(const Point&)
{
    return (*this);
}
