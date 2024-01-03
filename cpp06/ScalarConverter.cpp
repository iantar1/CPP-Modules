/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:40:39 by iantar            #+#    #+#             */
/*   Updated: 2024/01/01 13:00:23 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

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
		std::cout << std::fixed << std::setprecision(0);
		std::cout << "float: " << ScalarConverter::floatConvert(str);
		// if (ScalarConverter::floatConvert(str) == static_cast<int>(ScalarConverter::floatConvert(str)))
		// 	std::cout << ".0f"<< std::endl;
		// else
		std::cout << ".0f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "double: " << ScalarConverter::doubleConvert(str);
		// if (ScalarConverter::doubleConvert(str) == static_cast<int>(ScalarConverter::doubleConvert(str)))
		// 	std::cout << ".0"<< std::endl;
		// else
		std::cout << ".0" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

char	ScalarConverter::charConvert(const std::string& str)
{
	std::string tmp = str;
	size_t  i = -1, n;

	while (tmp[++i] == '0')
		tmp = tmp.c_str() + 1;
	int integer = std::atoi(str.c_str());

	if (integer > 127 || integer < -128)
		throw ScalarConverter::InvalidIput();
	if (tmp[0] == '-')
	{
		i = 1;
		n = 4;
	}
	else
	{
		i = 0;
		n = 3;
	}
	while (i < tmp.size())
	{
		if (std::isdigit(tmp[i]) == 0)
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
	std::string	tmp = str;

	i = 0;
	//tmp = tmp.c_str() + (tmp[0] == '+' || tmp[0] == '-');
	tmp = str;
	if (tmp[0] == '-' || tmp[0] == '+')
		tmp = tmp.substr(1, tmp.size());
	while (i < tmp.size() && tmp[i] == '0' && (i + 1 < tmp.size() && tmp[i + 1] == '0'))
	{
		//tmp = tmp.c_str() + 1;
		//std::cout << tmp << "tmpSize: "<< tmp.size() << "\n";
		tmp = tmp.substr(1, tmp.size());
		i++;
	}
	std::cout << tmp << "tmpSize: "<< tmp.size() << "\n";
	while (i < tmp.size())
	{
		if (std::isdigit(tmp[i]) == 0)
		{
			if (tmp[i] == 'f' && i == tmp.size() - 1 && dot && tmp.size() > 1 && tmp[i - 1] == '0')
				break ;
			if (i > n || tmp[i] != '.' || dot || str[0] == '.')
			   throw ScalarConverter::InvalidIput();
			else if (dot == 0)
				dot = 1;
			else
				break ; 
		}
		if (i > n && dot == 0)
		{
			throw ScalarConverter::InvalidIput();
		}
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
	if (var > FLT_MAX || var < _MIN_FLT)
	{
		throw ScalarConverter::InvalidIput();
	}
	float value = static_cast<float>(var);
	return (value);
}

double	ScalarConverter::doubleConvert(const std::string& str)
{
	char* end;

	ScalarConverter::invalid(309, str);
	return (std::strtod(str.c_str(), &end));
}
