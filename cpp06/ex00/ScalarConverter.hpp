/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:40:41 by iantar            #+#    #+#             */
/*   Updated: 2023/12/29 10:58:48 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <exception>
# include <cstdlib>
# include <string>
# include <cctype>
# include <climits>
# include <float.h>
# include <iomanip>
# define DEFAULT ""

class ScalarConverter
{
private:
	const std::string	str;

private:
	class InvalidIput : public std::exception
	{
	public:
		const char*	what() const throw()
		{
			return ("Invalid Iput");
		}	
	};
	class Impossible : public std::exception
	{
	public:
		const char*	what() const throw()
		{
			return ("Impossible");
		}	
	};
	class NonDisplayable : public std::exception
	{
	public:
		const char*	what() const throw()
		{
			return ("Non Displayable");
		}	
	};

public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter&);
	ScalarConverter&	operator=(const ScalarConverter&);
	~ScalarConverter();

	static void	convert(const std::string&);
	static char	charConvert(const std::string&);
	static int		intConvert(const std::string&);
	static float	floatConvert(const std::string&);
	static double	doubleConvert(const std::string&);
	static void		invalid(size_t, const std::string&);
};
