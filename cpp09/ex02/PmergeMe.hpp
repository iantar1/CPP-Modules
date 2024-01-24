/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:55:24 by iantar            #+#    #+#             */
/*   Updated: 2024/01/24 17:29:58 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <cstdlib>
# include <vector>
# include <iostream>
# include <algorithm>
# include <sstream>
# include <limits.h>

class PmergeMe
{
private:

	static std::vector<int> SortedArr;
	static std::vector<int> MainArr;
	static std::vector<int> ArrMax;
	static std::vector<int> ArrMin;
	static int				ArrSize;


	PmergeMe();

public:

	~PmergeMe();
	PmergeMe(const PmergeMe&);
	PmergeMe&   operator=(const PmergeMe&);

	static void	mergeSort(int, int);
	static void	merge(int start, int mid, int end);
	static void	setNum(const std::string&);
	static void	insert();
	static void	isolation();
	static void	isValidNum(const std::string&);
};
