/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:40:41 by iantar            #+#    #+#             */
/*   Updated: 2024/01/03 14:38:24 by iantar           ###   ########.fr       */
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
# include <limits>
# define DEFAULT ""
# define DOT 39
# define F 66
# define PLUS 43
# define MINUS 45
# define ZERO 48
# define CLEAND 1
# define _MIN_FLT -340282346638528859811704183484516925440.0000000000000000
# define DEC_BASE 10

enum e_flags {NANF = 1, NAN, PINFF , MINFF};

class ScalarConverter
{
private:
	static std::string	newStr;
	static int			flag;
	static bool			isCleand;
	static std::string	specialVal[4];

private:
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

	static void		convert(const std::string&);
	static char		charConvert();
	static int		intConvert();
	static float	floatConvert();
	static double	doubleConvert();
	static void		impossible(const std::string&);
	static void		cleanStr(std::string);
	static bool		thereIsDot();
};
