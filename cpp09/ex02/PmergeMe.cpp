/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:55:14 by iantar            #+#    #+#             */
/*   Updated: 2024/01/24 20:16:46 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

std::vector<int>	PmergeMe::MainArr;
std::vector<int>	PmergeMe::SortedArr;
std::vector<int>	PmergeMe::ArrMax;
std::vector<int>	PmergeMe::ArrMin;
int					PmergeMe::ArrSize;
std::deque<int> 	PmergeMe::dequeMax;
std::deque<int> 	PmergeMe::dequeMin;
std::deque<int> 	PmergeMe::dequeSorted;

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe&)
{
}
PmergeMe&   PmergeMe::operator=(const PmergeMe&)
{
	return (*this);
}


// general methods

void	PmergeMe::isValidNum(const std::string& str)
{
	std::istringstream	iss(str);
	long				val;

	if (str.size() > 10)
		throw std::runtime_error("Eroor");
	// if (!str.find("."))
	// 	throw std::runtime_error("Eroor");
	iss >> std::noskipws >> val;
	if (!iss.eof() || iss.fail())//check 1.25.56
		throw std::runtime_error("Eroor");
	if (val < 0 || val > INT_MAX)
		throw std::runtime_error("Eroor");
}

void	PmergeMe::setNum(const std::string& str)
{
	long	num;
	std::istringstream iss(str);	

	isValidNum(str);
	iss >> num;
	MainArr.push_back(num);
}

void	PmergeMe::printResult()
{
	std::cout << "Before: ";
	for (int i = 0; i < ArrSize; i++)
		std::cout << MainArr[i] << " ";
	std::cout << std::endl;
	std::cout << "After: ";
	for (int i = 0; i < ArrSize; i++)
		std::cout << SortedArr[i] << " ";
	std::cout << std::endl;
}

// vector methods

void    PmergeMe::mergeVect(int start, int mid, int end)
{
	std::vector<int>	tmp1;
	std::vector<int>	tmp2;
	size_t				j;
	size_t				k;

	for (int i = start; i <= mid; i++)
		tmp1.push_back(ArrMax[i]);
	for (int i = mid + 1; i <= end; i++)
		tmp2.push_back(ArrMax[i]);
	j = 0;
	k = 0;
	for (int i = start; i <= end; i++)
	{
		if (j < tmp1.size() && (tmp1[j] < tmp2[k] || k >= tmp2.size()))
		{
			ArrMax[i] = tmp1[j];
			j++;
		}
		else
		{
			ArrMax[i] = tmp2[k];
			k++;
		}
	}
}

void	PmergeMe::mergeSortVect(int start, int end)
{
	int mid;

	if (start < end)
	{
		mid = (end + start) /2; 
		mergeSortVect(start, mid);
		mergeSortVect(mid + 1, end);
		mergeVect(start, mid, end);
	}
	return ;
}

void	PmergeMe::insertVect()
{
	size_t	k;
	size_t	j;

	k = 0;
	j = 0;
	for (int i = 0; i < ArrSize; i++)
	{
		if (j < ArrMax.size() && (ArrMax[j] < ArrMin[k] || k >= ArrMin.size()))
		{
			SortedArr.push_back(ArrMax[j]);
			j++;
		}
		else
		{
			SortedArr.push_back(ArrMin[k]);
			k++;
		}
	}
}

void	PmergeMe::isolationVect()
{
	ArrSize = MainArr.size();
	for (int i = 0; i < (ArrSize / 2) * 2; i += 2)
	{
		ArrMax.push_back(std::max(MainArr[i], MainArr[i + 1]));
		ArrMin.push_back(std::min(MainArr[i], MainArr[i + 1]));
	}
	if (ArrSize % 2)
		ArrMax.push_back(MainArr[ArrSize - 1]);
}

void	PmergeMe::MergeMeVector()
{
	isolationVect();
	mergeSortVect(0, ArrMax.size() - 1);
	insertVect();
}

// Deque Methods

void    PmergeMe::mergeDeque(int start, int mid, int end)
{
	std::deque<int>	tmp1;
	std::deque<int>	tmp2;
	size_t				j;
	size_t				k;

	for (int i = start; i <= mid; i++)
		tmp1.push_back(dequeMax[i]);
	for (int i = mid + 1; i <= end; i++)
		tmp2.push_back(dequeMax[i]);
	j = 0;
	k = 0;
	for (int i = start; i <= end; i++)
	{
		if (j < tmp1.size() && (tmp1[j] < tmp2[k] || k >= tmp2.size()))
		{
			dequeMax[i] = tmp1[j];
			j++;
		}
		else
		{
			dequeMax[i] = tmp2[k];
			k++;
		}
	}
}

void	PmergeMe::mergeSortDeque(int start, int end)
{
	int mid;

	if (start < end)
	{
		mid = (end + start) /2; 
		mergeSortDeque(start, mid);
		mergeSortDeque(mid + 1, end);
		mergeDeque(start, mid, end);
	}
	return ;
}

void	PmergeMe::insertDeque()
{
	size_t	k;
	size_t	j;

	k = 0;
	j = 0;
	for (int i = 0; i < ArrSize; i++)
	{
		if (j < dequeMax.size() && (dequeMax[j] < dequeMin[k] || k >= dequeMin.size()))
		{
			SortedArr.push_back(dequeMax[j]);
			j++;
		}
		else
		{
			SortedArr.push_back(dequeMin[k]);
			k++;
		}
	}
}

void	PmergeMe::isolationDeque()
{
	ArrSize = MainArr.size();
	for (int i = 0; i < (ArrSize / 2) * 2; i += 2)
	{
		dequeMax.push_back(std::max(MainArr[i], MainArr[i + 1]));
		dequeMin.push_back(std::min(MainArr[i], MainArr[i + 1]));
	}
	if (ArrSize % 2)
		dequeMax.push_back(MainArr[ArrSize - 1]);
}

void	PmergeMe::MergeMeDeque()
{
	isolationDeque();
	mergeSortDeque(0, dequeMax.size() - 1);
	insertDeque();
}
