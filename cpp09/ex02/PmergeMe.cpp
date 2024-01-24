/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:55:14 by iantar            #+#    #+#             */
/*   Updated: 2024/01/24 17:36:15 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

std::vector<int>	PmergeMe::MainArr;
std::vector<int>	PmergeMe::SortedArr;
std::vector<int>	PmergeMe::ArrMax;
std::vector<int>	PmergeMe::ArrMin;
int					PmergeMe::ArrSize;

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
}

void    PmergeMe::merge(int start, int mid, int end)
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
	for (size_t i = start; i <= end; i++)
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

void	PmergeMe::mergeSort(int start, int end)
{
	int mid;

	if (start < end)
	{
		mid = (end + start) /2; 
		mergeSort(start, mid);
		mergeSort(mid + 1, end);
		merge(start, mid, end);
	}
	return ;
}

void	PmergeMe::insert()
{
	int	i;

	i = 0;
	for (int i = 0; i < )
}

void	PmergeMe::isolation()
{
	ArrSize = MainArr.size();
	for (size_t i = 0; i < (ArrSize / 2) * 2; i += 2)
	{
		ArrMax.push_back(std::max(MainArr[i], MainArr[i + 1]));
		ArrMin.push_back(std::min(MainArr[i], MainArr[i + 1]));
	}
	if (ArrSize % 2)
		ArrMax.push_back(MainArr[ArrSize - 1]);
}

void	PmergeMe::isValidNum(const std::string& str)
{
	std::istringstream	iss(str);
	long				val;

	if (str.size() > 10)
		throw std::runtime_error("Eroor");
	if (str.find("."))
		throw std::runtime_error("Eroor");
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
