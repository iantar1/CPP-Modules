/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:34:41 by iantar            #+#    #+#             */
/*   Updated: 2023/11/30 15:31:35 by iantar           ###   ########.fr       */
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
	Fixed&	operator=(const Fixed& rhs);
	~Fixed();
	
public:
 	float	toFloat( void ) const;
	int 	toInt( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

public:
	bool	operator>(const Fixed& rhs);
	bool	operator<(const Fixed& rhs);
	bool	operator<=(const Fixed& rhs);
	bool	operator>=(const Fixed& rhs);
	bool	operator==(const Fixed& rhs);
	bool	operator!=(const Fixed& rhs);

	Fixed	operator+(const Fixed& rhs);
	Fixed	operator-(const Fixed& rhs);
	Fixed	operator*(const Fixed& rhs);
	Fixed	operator/(const Fixed& rhs);

	Fixed&	operator++(void);
	Fixed&	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	static	Fixed&	min(Fixed& fix1, Fixed& fix2);
	static	const Fixed&	min(const Fixed& fix1, const Fixed& fix2);
	static	Fixed&	max(Fixed& fix1, Fixed& fix2);
	static	const Fixed&	max(const Fixed& fix1, const Fixed& fix2);

};
	
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
