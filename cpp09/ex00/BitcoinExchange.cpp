/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:24:41 by iantar            #+#    #+#             */
/*   Updated: 2024/01/15 13:05:50 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

std::map<std::string, float>    BitcoinExchange::dataCsv;
const std::string BitcoinExchange::title[3] = {"date", "|", "value"};
const int BitcoinExchange::monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
std::string BitcoinExchange::ErrorMes;

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange&)
{
}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange&)
{
	return (*this);
}

bool	BitcoinExchange::invalidFileTitle(std::ifstream& inp)
{
	std::string str;
	std::string word;

	std::getline(inp, str);
	std::stringstream tmp(str);
	for (int i = 0; tmp >> word; i++)
	{
		if (i > 3 || title[i] != word)
		{
			ErrorMes = word;
			return (true);
		}
	}
	return (false);
}

int	BitcoinExchange::getCurentYear()
{
	int	year;

	year = time(NULL);
	return (year / TOYEAR);
}

void	BitcoinExchange::valideDate(const std::string& year, const std::string& month, const std::string& day)
{
	int	year_;
	int	month_;
	int	day_;


	if (year.empty() || month.empty() || day.empty())
		throw std::runtime_error(ErrorMes);
	year_ = atoi(year.c_str());
	month_= atoi(month.c_str());
	day_= atoi(day.c_str());
	if (year_ > BitcoinExchange::getCurentYear())
	{
		throw std::runtime_error(ErrorMes);
	}
	if (month_ > 12 || month_ < 1)
		throw std::runtime_error(ErrorMes);
	if (monthDays[month_ - 1] < day_)
		throw std::runtime_error(ErrorMes);	
}

void	BitcoinExchange::dateCheck(const std::string& str)
{
	std::string year;
	std::string month;
	std::string day;
	size_t			i;

	ErrorMes = "Error: bad input => " + str;
	for (i = 0; i < str.size() && isdigit(str[i]); i++)
		year += str[i];

	if (str[i] != '-')
		throw std::runtime_error(ErrorMes);

	for (i++;  i < str.size() && isdigit(str[i]); i++)
		month += str[i];

	if (str[i] != '-')
		throw std::runtime_error(ErrorMes);

	for (i++;  i < str.size() && isdigit(str[i]); i++)
		day += str[i];

	if (i != str.size())
		throw std::runtime_error(ErrorMes);

	valideDate(year, month, day);
}

void	BitcoinExchange::valueCheck(const std::string& str)
{
	std::istringstream	iss(str);
	float				val;

// Use noskipws to stop at the first non-whitespace character
	iss >> std::noskipws >> val;
// Check if the entire string was successfully converted and there are no trailing characters
	if (iss.eof() && !iss.fail() == false)
		throw std::runtime_error("Error: bad input");

	if (val < 0 || val > 1000)
		throw std::runtime_error("Error: bad input");
}

void	BitcoinExchange::errorsCheck(const std::string& str)
{
	std::string word;

	std::stringstream tmp(str);
	for (int i = 0; tmp >> word; i++)
	{
		switch (i)
		{
		case 0:
			dateCheck(word);
			break;
		case 1:
			if (word != "|") throw std::runtime_error("Error: bad input");
			break;
		case 2:
			valueCheck(word);
			break;
		default:
			throw std::runtime_error("Error: bad input");
			break;
		}
	}
}
void	BitcoinExchange::fillMap(std::ifstream& fcsv)
{
	std::string	str;

	std::getline(fcsv, str);
	while (std::getline(fcsv, str))
	{
		dataCsv[str.substr(0, 10)] = atof((str.substr(11)).c_str());
	}
}

void	BitcoinExchange::bitcoinValue(const std::string& date, float val)
{
	std::map<std::string, float>::iterator	iter;

	iter = dataCsv.lower_bound(date);
	if (dataCsv.count(date) == false)
		iter--;
	std::cout << date << " => ";
	std::cout << val << " = ";
	std::cout << iter->second * val << std::endl;
}

float	BitcoinExchange::getVal(const std::string& str)
{
	std::string word;

	std::stringstream tmp(str);
	for (int i = 0; i < 3; i++)
		tmp >> word;
	return (atof(word.c_str()));
}

std::string	BitcoinExchange::getDate(const std::string& str)
{
	std::string word;

	std::stringstream tmp(str);
	tmp >> word;
	return (word);
}

void	BitcoinExchange::bitcoinEx(std::ifstream& inp, std::ifstream& fcsv)
{
	std::string str;

	if (invalidFileTitle(inp))
	{
		std::cerr << "Error: invalide Title => " << ErrorMes << std::endl;
		return ;
	}
	fillMap(fcsv);
	while (inp.eof() == false)
	{
		try
		{
			std::getline(inp, str);
			if (str.empty())
			{
				std::cerr << "Error: empty line" << std::endl;
				continue ;
			}
			errorsCheck(str);
			bitcoinValue(getDate(str), getVal(str));
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}
}

BitcoinExchange::~BitcoinExchange()
{
}
