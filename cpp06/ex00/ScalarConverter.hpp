/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:40:41 by iantar            #+#    #+#             */
/*   Updated: 2024/01/05 11:19:19 by iantar           ###   ########.fr       */
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
#include <cstdio>
#include <cstring>
#include <string.h>
# include <sstream>

# define DEFAULT ""
# define DOT 46
# define F 102
# define PLUS 43
# define MINUS 45
# define ZERO 48
# define CLEAND 1
# define DEC_BASE 10
# define PINF 1
# define MINF 2
# define PRINT(a) std::cout << std::fixed << std::setprecision(1) << a;

enum e_flags {NANF = 1, NAN, PINFF , MINFF};

class ScalarConverter
{
private:
	static std::string	newStr;
	static int			SepicialValFlag;
	static bool			isCleand;
	static bool			hasAdot;
	static bool			floatLim;
	static std::string	specialVal[6];

private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter&);
	ScalarConverter&	operator=(const ScalarConverter&);
	~ScalarConverter();

private:
	class Impossible : public std::exception
	{
	public:
		const char*	what() const throw()
		{
			return ("Impossible");
		}	
	};
	class Pinff : public std::exception
	{
	public:
		const char*	what() const throw()
		{
			return ("+inff");
		}	
	};
	class Minff : public std::exception
	{
	public:
		const char*	what() const throw()
		{
			return ("-inff");
		}	
	};
	class Pinf : public std::exception
	{
	public:
		const char*	what() const throw()
		{
			return ("+inf");
		}	
	};
	class Minf : public std::exception
	{
	public:
		const char*	what() const throw()
		{
			return ("-inf");
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

	static void		convert(const std::string&);
	static char		charConvert();
	static int		intConvert();
	static float	floatConvert();
	static double	doubleConvert();
	static void		impossible(const std::string&);
	static void		cleanStr(std::string);
	static void		thereIsDot();
};
