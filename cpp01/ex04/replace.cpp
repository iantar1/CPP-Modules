/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:21:33 by iantar            #+#    #+#             */
/*   Updated: 2023/11/17 21:19:07 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "includes.hpp"

void	replace::replaceLine(std::ifstream& inputFile, std::ofstream& outputFile)
{
	while (std::getline(inputFile, line))
	{
		if (s1.empty())
			outputFile << line << std::endl;
		else
			outputFile << getNewLine() << std::endl;
		newLine = "";
	}
}

std::string	replace::getNewLine(void)
{
	size_t		pos = 0;
	size_t		prev = 0;

	while (true)
	{
		pos = line.find(s1, prev);
		if (pos == std::string::npos)
		{
			newLine.append(line.substr(prev, pos));
			break ;
		}
		newLine.append(line.substr(prev, pos - prev) + s2);
		prev = pos + s1.length();
	}
	return (newLine);
}

replace::replace(std::string s1_, std::string s2_): s1(s1_), s2(s2_)
{
}
