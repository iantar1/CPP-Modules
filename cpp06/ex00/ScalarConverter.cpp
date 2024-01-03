/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:40:39 by iantar            #+#    #+#             */
/*   Updated: 2024/01/03 14:39:52 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

std::string	ScalarConverter::newStr;
int			ScalarConverter::flag = 0;
bool		isCleand = 0;
std::string	specialVal[4] = {"nanf", "nan", "+inff", "-inff"};

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter&)
{
}

ScalarConverter&    ScalarConverter::operator=(const ScalarConverter&)
{
	return (*this);
}

bool	ScalarConverter::thereIsDot()
{
	for (size_t i = 0; i < newStr.size(); i++)
	{
		if (newStr[i] == DOT)
			return (true);
	}
	return (false);
}


double	ScalarConverter::doubleConvert(const std::string& str)
{
}

void	ScalarConverter::cleanStr(std::string str)
{
	bool	sign;

	if (isCleand)
		return ;
	isCleand = CLEAND;
	sign = false;
	if (str.size() == 1 || flag)
	{
		ScalarConverter::newStr = str;
		return ;
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
}

char	ScalarConverter::charConvert()
{
	bool	dot;
	int		num;

	dot = false;
	if (flag)
		throw Impossible();
	for (size_t i; i < newStr.size(); i++)
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
	for (int i = 0; i < 4; i++)
	{
		if (newStr == specialVal[i])
			throw Impossible();
	}
	if (newStr[0] == MINUS)
		sign = true;
	else
		sign = false;
	for (size_t i = 0; i < newStr.size(); i++)
	{
		if (dot && ((i > 10 && !sign) || (i > 11 && sign)))
			throw Impossible();
		if (newStr[i] == DOT)
			dot = true;
	}
	num = std::strtol(newStr.c_str(), &endptr, DEC_BASE);
	if (endptr != '\0')
		throw Impossible();
	if (num > INT_MAX || num < INT_MIN)
		throw Impossible();
	return (static_cast<int>(num));
}

float   ScalarConverter::floatConvert()
{
	if (flag)
		return (flag);
	
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
	for (int i = 0; i < 4; i++)
	{
		if (newStr == specialVal[i])
		{
			flag = i + 1;
			return ;
		}
	}
	tmp = str;
	tmp = tmp.c_str() + (tmp[0] == PLUS || tmp[0] == MINUS);
	if (tmp.size() == 2 && (!isdigit(tmp[0]) || !isdigit(tmp[0])))
		throw Impossible();
	for (size_t i = 0; i < tmp.size(); i++)
	{
		if (!isdigit(tmp[0]) && tmp[i] != DOT && tmp[i] != F)
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

void	ScalarConverter::convert(const std::string&)
{
	try
	{
		impossible(str);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
