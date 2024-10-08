/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:34:41 by iantar            #+#    #+#             */
/*   Updated: 2023/11/29 20:45:33 by iantar           ###   ########.fr       */
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
	Fixed&	operator=(Fixed&);

public:
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};


