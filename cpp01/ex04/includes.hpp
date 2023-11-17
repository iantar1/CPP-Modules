/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:39:49 by iantar            #+#    #+#             */
/*   Updated: 2023/11/17 18:38:39 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <fstream>
# include <cstdlib>

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
	std::string	getNewLine(void);
	void		replaceLine(std::ifstream& inputFile, std::ofstream& outputFile);
};
