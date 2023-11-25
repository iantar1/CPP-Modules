/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:34:41 by iantar            #+#    #+#             */
/*   Updated: 2023/11/21 16:58:39 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <cstdlib>

class Fixed
{
private:
	int             fixedNum;
	static const    int fractionBits;
public:
	Fixed(void);
	Fixed(Fixed& obj);
	~Fixed();
	Fixed&	operator=(Fixed& rhs)
	{
		this->fixedNum = rhs.fixedNum;
		return (*this);
	}
public:
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};


