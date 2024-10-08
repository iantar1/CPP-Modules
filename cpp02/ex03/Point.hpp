/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:13:40 by iantar            #+#    #+#             */
/*   Updated: 2023/12/01 10:46:52 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;

public:
	Point();
	Point(const float f1, const float f2);
	Point(const Point& obj);
	Point&   operator=(const Point&);
	~Point();

	const	Fixed&	getX(void) const;
	const	Fixed&	getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
