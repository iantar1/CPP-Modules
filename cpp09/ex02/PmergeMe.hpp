/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:55:24 by iantar            #+#    #+#             */
/*   Updated: 2024/01/25 18:05:53 by iantar           ###   ########.fr       */
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
# include <ctime>
# include <iomanip>

// subject :
// It is strongly advised to implement your algorithm for each container
// and thus to avoid using a generic function.

class PmergeMe
{
private:
	static int				ArrSize;
	static std::vector<int> ArrMin;

	static std::vector<int> MainArr;
	static std::vector<int> ArrMax;
	static double			vectTime;

	static std::deque<int>	dequeMax;
	static std::deque<int>	dequeMin;
	static double			dequeTime;

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
	static void	printResultVect();
	
	static void	mergeSortDeque(int, int);
	static void	mergeDeque(int start, int mid, int end);
	static void	insertDeque();
	static void	isolationDeque();
	static void	MergeMeDeque();
	static void	printResultDeque();

	static void	setNum(const std::string&);
	static void	isValidNum(const std::string&);
	static void	printTime();
	
};
