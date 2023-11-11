/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:21:33 by iantar            #+#    #+#             */
/*   Updated: 2023/11/11 14:08:26 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "includes.hpp"

class replace
{
private:
	std::string line;
	std::string	s1;
	std::string	s2;
	std::string newLine;
	std::string	fileName;
	size_t		index;
public:
	replace(std::string s1_, std::string s2_);
	~replace();
public:
	void		setLine(std::ofstream outputFile);
	std::string	getNewLine(void);
	void		replaceLine(std::ifstream inputFile, std::ofstream outputFile);
};

void	replace::replaceLine(std::ifstream inputFile, std::ofstream outputFile)
{
	//size_t	index;
	while (std::getline(inputFile, line))
	{
		index = line.find(s1);
		if (index == std::string::npos)
			continue ;
		
		outputFile << getNewLine();
	}
}

void	setLine(std::ofstream outputFile)
{
	
}

std::string	replace::getNewLine(void)
{
	newLine = line.substr(0, index + 1);
	newLine += s2;
	newLine += line.substr(index + line.size(), index + 1);
	return (newLine);
}
replace::replace(std::string s1_, std::string s2_): s1(s1_), s2(s2_)
{
	
}

replace::~replace()
{
	
}
