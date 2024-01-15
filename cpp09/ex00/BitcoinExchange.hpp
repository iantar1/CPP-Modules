/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:24:46 by iantar            #+#    #+#             */
/*   Updated: 2024/01/15 11:11:34 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <cstdlib>
# include <iostream>
# include <map>
# include <fstream>
# include <string.h>
# include <sstream>
# include <ctime>
# include <cstdlib>

# define TITLE "date | value"
# define SPACE " "
# define TOYEAR 60 * 60 * 24 * 365

enum months {
    Jan = 1,  Feb , Mar , Apr , May , Jun , Jul , Aug , Sep , Oct , Nov , Dec
};

class BitcoinExchange
{
private:
	static std::map<std::string, float>	dataCsv;
	static const std::string	title[3];
	static std::string			ErrorMes;
	static const int			monthDays[12];
	BitcoinExchange();

public:
	BitcoinExchange(const BitcoinExchange&);
	BitcoinExchange&    operator=(const BitcoinExchange&);
	~BitcoinExchange();

	static void	bitcoinEx(std::ifstream&, std::ifstream&);
	static void	errorsCheck(const std::string&);
	static void	fillMap(std::ifstream&);
	static void	bitcoinValue(const std::string&, int);
// input fiel error checking
	static bool		invalidFileTitle(std::ifstream&);
	static void		structLineCheck();
	static void		dateCheck(const std::string&);
	static void		valueCheck(const std::string&);
	static void		valideDate(const std::string&, const std::string&, const std::string&);
	static int		getCurentYear();
	static const	std::string&	getDate(const std::string&)
	//static void	checkDay(int, int);

	//static int   ToInt(const std::string&);
};
