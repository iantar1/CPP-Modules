/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:55:14 by iantar            #+#    #+#             */
/*   Updated: 2024/01/24 14:53:39 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

std::vector<int> MainArr;
std::vector<int> ArrMax;
std::vector<int> ArrMin;

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
// arr1 : 5 
// arr2 : 2
void    PmergeMe::merge(int start, int mid, int end)
{
	std::vector<int>	tmp1;
	std::vector<int>	tmp2;
	int					j;
	int					k;

	// for (int i = start; i <= mid; i++)
	// 	tmp1.push_back(ArrMax[i]);
	// for (int i = mid + 1; i <= end; i++)
	// 	tmp2.push_back(ArrMax[i]);
	std::copy(ArrMax.begin() + start, ArrMax.begin() + mid, std::back_inserter(tmp1));
	std::copy(ArrMax.begin() + mid + 1, ArrMax.begin() + end, std::back_inserter(tmp2));
	j = 0;
	k = 0;
	for (int i = start; i <= end; i++)
	{
		if (tmp1[j] < tmp2[k])
		{
			ArrMax.push_back(tmp1[j]);
			j++;
		}
		else
		{
			ArrMax.push_back(tmp2[k]);
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

void	PmergeMe::setNum(const std::string& str)
{
	for (size_t i = 0; i < (str.size() / 2) * 2; i += 2)
	{
		ArrMax.push_back(std::max(str[i], str[i + 1]));
		ArrMin.push_back(std::min(str[i], str[i + 1]));
	}
	if (str.size() % 2)
		ArrMax.push_back(str[str.size() - 1]);
}
