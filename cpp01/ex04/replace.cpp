/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:21:33 by iantar            #+#    #+#             */
/*   Updated: 2023/11/12 11:33:40 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "includes.hpp"

void	replace::replaceLine(std::ifstream& inputFile, std::ofstream& outputFile)
{
	while (std::getline(inputFile, line))
	{
		index = line.find(s1);
		if (index == std::string::npos)
		{
			line += '\n';
			outputFile << line;
			continue ;
		}
		outputFile << getNewLine();
	}
}

std::string	replace::getNewLine(void)
{
	while (index != std::string::npos)
	{
		newLine = line.substr(0, index);
		newLine += s2;
		newLine += line.substr(index + s2.size(), line.size() - (index + s2.size()));
		index = newLine.find(s1);
		line = newLine;
	}
	newLine += '\n';
	return (newLine);
}
replace::replace(std::string s1_, std::string s2_): s1(s1_), s2(s2_)
{
}

replace::~replace()
{
	
}
