/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:40:39 by iantar            #+#    #+#             */
/*   Updated: 2023/12/31 10:26:36 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(){}


ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter&)
{
}

ScalarConverter&    ScalarConverter::operator=(const ScalarConverter&)
{
	return (*this);
}

void    ScalarConverter::convert(const std::string& str)
{
	try
	{
		std::cout << "char: " << ScalarConverter::charConvert(str) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "int: " << ScalarConverter::intConvert(str) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		//std::cout << std::fixed << std::setprecision(0);
		std::cout << "float: " << ScalarConverter::floatConvert(str);
		if (ScalarConverter::floatConvert(str) == (int)ScalarConverter::floatConvert(str))
			std::cout << ".0f"<< std::endl;
		else
			std::cout << "0f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "double: " << ScalarConverter::doubleConvert(str);
		if (ScalarConverter::doubleConvert(str) == (int)ScalarConverter::doubleConvert(str))
			std::cout << ".0"<< std::endl;
		else
			std::cout << "0" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

char	ScalarConverter::charConvert(const std::string& str)
{
	int integer = std::atoi(str.c_str());

	if (integer > 127 || integer < -128)
		throw ScalarConverter::InvalidIput();
	size_t  i, n;
	if (str[0] == '-')
	{
		i = 1;
		n = 4;
	}
	else
	{
		i = 0;
		n = 3;
	}
	while (i < str.size())
	{
		if (std::isdigit(str[i]) == 0)
		{
			if (i > n)
			   throw ScalarConverter::InvalidIput();
			else
				break ; 
		}
		if (i > n)
			throw ScalarConverter::InvalidIput();
		i++;
	}
	if (std::isprint(integer) == false)
		throw NonDisplayable();
	return (static_cast<char>(integer));
}

void ScalarConverter::invalid(size_t n, const std::string& str)
{
	size_t	i;
	bool	dot = false;

	if (str[0] == '-')
	{
		i = 1;
		n++;
	}
	else
	{
		i = 0;
	}
	while (i < str.size())
	{
		if (std::isdigit(str[i]) == 0)
		{
			if (str[i] == 'f' && i == str.size() - 1 && dot && str.size() > 1 && str[i - 1] == '0')
				break ;
			if (i > n || str[i] != '.' || dot || str[0] == '.')
			   throw ScalarConverter::InvalidIput();
			else if (dot == 0)
				dot = 1;
			else
				break ; 
		}
		if (i > n && dot == 0)
			throw ScalarConverter::InvalidIput();
		i++;
	}
}

int ScalarConverter::intConvert(const std::string& str)
{
	ScalarConverter::invalid(10, str);
	long    num = std::atol(str.c_str());
	if (num > INT_MAX || num < INT_MIN)
		throw ScalarConverter::InvalidIput();
	return (static_cast<int>(num));
}

float   ScalarConverter::floatConvert(const std::string& str)
{
	char* end;

	ScalarConverter::invalid(39, str);
	double var = std::strtod(str.c_str(), &end);
	if (var > FLT_MAX || var < FLT_MIN)
	{
		throw ScalarConverter::InvalidIput();
	}
	float value = static_cast<float>(var);
	return (value);
}

double	ScalarConverter::doubleConvert(const std::string& str)
{
	char* end;

	ScalarConverter::invalid(70, str);
	//double var = std::strtod(str.c_str(), &end);
	// if (maxIntCheck())
	// {
	// 	throw ScalarConverter::InvalidIput();
	// }
	return (std::strtod(str.c_str(), &end));
}
