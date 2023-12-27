/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:40:39 by iantar            #+#    #+#             */
/*   Updated: 2023/12/27 14:49:01 by iantar           ###   ########.fr       */
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
        std::cout << "hello\n";
        std::cout << "char: " << ScalarConverter::charConvert(str) << std::endl;
        std::cout << "int: " << ScalarConverter::intConvert(str) << std::endl;
        std::cout << "float: " << ScalarConverter::floatConvert(str) << std::endl;
        std::cout << "double: " << ScalarConverter::doubleConvert(str) << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}

char	ScalarConverter::charConvert(const std::string& str)
{
    int integer = std::atoi(str.c_str());

    return ((char)integer);
}

int ScalarConverter::intConvert(const std::string& str)
{
    return (std::atoi(str.c_str()));
}
float   ScalarConverter::floatConvert(const std::string& str)
{
    char* end;
    float value = static_cast<float>(std::strtod(str.c_str(), &end));
    return (value);
}

double	ScalarConverter::doubleConvert(const std::string& str)
{
    char* end;
    return (std::strtod(str.c_str(), &end));
}
