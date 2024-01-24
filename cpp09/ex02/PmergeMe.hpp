/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:55:24 by iantar            #+#    #+#             */
/*   Updated: 2024/01/24 18:50:02 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <cstdlib>
# include <vector>
# include <deque>
# include <iostream>
# include <algorithm>
# include <sstream>
# include <limits.h>

class PmergeMe
{
private:
	static int				ArrSize;
	static std::vector<int> ArrMin;

	static std::vector<int> SortedArr;
	static std::vector<int> MainArr;
	static std::vector<int> ArrMax;

	static std::deque<int> dequeMax;
	static std::deque<int> dequeMin;
	static std::deque<int> dequeSorted;

	PmergeMe();

public:

	~PmergeMe();
	PmergeMe(const PmergeMe&);
	PmergeMe&   operator=(const PmergeMe&);

	static void	mergeSortVect(int, int);
	static void	mergeVect(int start, int mid, int end);
	static void	insertVect();
	static void	isolationVect();
	static void	MergeMeVector();
	
	static void	mergeSortDeque(int, int);
	static void	mergeDeque(int start, int mid, int end);
	static void	insertDeque();
	static void	isolationDeque();
	static void	MergeMeDeque();

	static void	setNum(const std::string&);
	static void	isValidNum(const std::string&);
	static void	printResult();
	
};
