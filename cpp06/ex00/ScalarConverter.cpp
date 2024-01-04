/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:40:39 by iantar            #+#    #+#             */
/*   Updated: 2024/01/04 11:07:07 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

std::string	ScalarConverter::newStr;
int			ScalarConverter::SepicialValFlag = 0;
bool		ScalarConverter::isCleand = 0;
bool		ScalarConverter::hasAdot = 0;
bool		ScalarConverter::floatLim = 0;
std::string	ScalarConverter::specialVal[6] = {"nan","+inf", "-inf", "nanf", "+inff", "-inff"};

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter&)
{
}

ScalarConverter&    ScalarConverter::operator=(const ScalarConverter&)
{
	return (*this);
}

void	ScalarConverter::thereIsDot()
{
	for (size_t i = 0; i < newStr.size(); i++)
	{
		if (newStr[i] == DOT)
			hasAdot = true;
	}
}



void	ScalarConverter::cleanStr(std::string str)
{
	bool	sign;

	if (isCleand)
		return ;
	isCleand = CLEAND;
	sign = false;
	if (str.size() == 1 || SepicialValFlag)
	{
		ScalarConverter::newStr = str;
		return ;
	}
	for (int i = 0; i < 6; i++)
	{
		if (newStr == specialVal[i])
		{
			ScalarConverter::newStr = str;
			return ;
		}
	}
	str = str.c_str() + (str[0] == PLUS);
	if (str[0] == MINUS)
	{
		str = str.c_str() + 1;
		sign = true;
	}
	while (str[0] == ZERO && (str.size() > 1 && str[1] != DOT))
		str = str.c_str() + 1;
	if (sign)
		str = "-" + str;
	if (str[str.size() - 1] == F)
		str = str.substr(0, str.size() - 1);
	ScalarConverter::newStr = str;
	thereIsDot();
}

char	ScalarConverter::charConvert()
{
	bool	dot;
	int		num;

	dot = false;
	if (SepicialValFlag)
		throw Impossible();
	for (size_t i = 0; i < newStr.size(); i++)
	{
		if (!dot && i > 3)
			throw Impossible();
		if (newStr[i] == DOT)
			dot = true;
	}
	num = std::atoi(newStr.c_str());
	if (num < 0 || num > 127)
		throw Impossible();
	if (std::isprint(num) == 0)
		throw NonDisplayable();
	return (static_cast<int>(num));
}

int ScalarConverter::intConvert()
{
	long	num;
	char*	endptr;
	bool	dot;
	bool	sign;

	dot = false;
	if (SepicialValFlag)
		throw Impossible();
	if (newStr[0] == MINUS)
		sign = true;
	else
		sign = false;
	for (size_t i = 0; i < newStr.size(); i++)
	{
		if (!dot && ((i > 10 && !sign) || (i > 11 && sign)))
			throw Impossible();
		if (newStr[i] == DOT)
			dot = true;
	}
	num = std::strtol(newStr.c_str(), &endptr, DEC_BASE);
	if (num > INT_MAX || num < INT_MIN)
		throw Impossible();
	return (static_cast<int>(num));
}

float   ScalarConverter::floatConvert()
{
	double	num;
	char*	endptr;
	bool	dot;
	bool	sign;

	dot = false;
	if (SepicialValFlag)
		return (SepicialValFlag);
	if (newStr[0] == MINUS)
		sign = true;
	else
		sign = false;
	for (size_t i = 0; i < newStr.size(); i++)
	{
		if (!dot && (i > 40 && sign))
			throw Minff();
		if (!dot && i > 39)
			throw Pinff();
		if (newStr[i] == DOT)
			dot = true;
	}
	num = std::strtod(newStr.c_str(), &endptr);
	if (num > std::numeric_limits<float>::max())
		throw Pinf();
	if (num < std::numeric_limits<float>::min())
		throw Minf();
	return (static_cast<float>(num));
}

double	ScalarConverter::doubleConvert()
{
	double	num;
	char*	endptr;
	bool	dot;
	bool	sign;

	dot = false;
	if (SepicialValFlag)
		return (SepicialValFlag);
	if (newStr[0] == MINUS)
		sign = true;
	else
		sign = false;
	for (size_t i = 0; i < newStr.size(); i++)
	{
		if (!dot && (i > 310 && sign))
			throw Minf();
		if (!dot && i > 309)
			throw Pinf();
		if (newStr[i] == DOT)
			dot = true;
	}
	num = std::strtod(newStr.c_str(), &endptr);
	return (num);
}

void ScalarConverter::impossible(const std::string& str)
{
	bool		dot;
	bool		f;
	std::string	tmp;

	dot = false;
	f = false;
	if (str.size() == 1)
		return ;
	for (int i = 0; i < 6; i++)
	{
		if (str == specialVal[i])
		{
			SepicialValFlag = i + 1;
			return ;
		}
	}
	tmp = str;
	tmp = tmp.c_str() + (tmp[0] == PLUS || tmp[0] == MINUS);
	if (tmp.size() == 2 && (!isdigit(tmp[0]) || !isdigit(tmp[0])))
		throw Impossible();
	for (size_t i = 0; i < tmp.size(); i++)
	{
		if (!isdigit(tmp[i]) && tmp[i] != DOT && tmp[i] != F)
			throw Impossible();
		if (tmp[i] == DOT)
		{
			if (dot)
				throw Impossible();
			dot = true;
		}
		if (tmp[i] == F)
		{
			if (i != tmp.size() - 1 || f)
				throw Impossible();
			f = true;
		}
	}
}

void	ScalarConverter::convert(const std::string& str)
{
	try
	{
		std::cout << "char: ";
		impossible(str);
		cleanStr(str);
		std::cout << ScalarConverter::charConvert() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "int: ";
		impossible(str);
		cleanStr(str);
		std::cout << ScalarConverter::intConvert() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "float: ";
		impossible(str);
		cleanStr(str);
		if (SepicialValFlag)
			std::cout << specialVal[(SepicialValFlag - 1) % 3];
		else if (floatLim)
			std::cout << specialVal[floatLim + 4];
		else
			PRINT(ScalarConverter::floatConvert())
		std::cout << "f";
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "double: ";
		impossible(str);
		cleanStr(str);
		if (SepicialValFlag)
			std::cout << specialVal[(SepicialValFlag - 1) % 3];
		else
			std::cout << ScalarConverter::doubleConvert();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
