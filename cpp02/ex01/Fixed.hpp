/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:34:41 by iantar            #+#    #+#             */
/*   Updated: 2023/11/24 10:45:44 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <cstdlib>
# include <cmath>

class Fixed
{
private:
	int             fixedNum;
	static const    int fractionBits;
public:
	Fixed(void);
	Fixed(const int iNum);
	Fixed(const float fNum);
	Fixed(const Fixed& obj);
	~Fixed();
// obj"cout" << fixed
	

public:
 	float	toFloat( void ) const;
	int 	toInt( void ) const;
	Fixed&	operator=(const Fixed& rhs);

public:
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
