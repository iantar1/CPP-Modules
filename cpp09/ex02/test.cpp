#include <iostream>
#include <vector>
# include <algorithm>


void    merge(std::vector<int>& Arr, int start, int mid, int end)
{
	std::vector<int>	tmp1;
	std::vector<int>	tmp2;
	int					j;
	int					k;

	for (int i = start; i <= mid; i++)
		tmp1.push_back(Arr[i]);
	for (int i = mid + 1; i <= end; i++)
		tmp2.push_back(Arr[i]);
	j = 0;
	k = 0;
	for (int i = start; i <= end; i++)
	{
		if (j < tmp1.size() && (tmp1[j] < tmp2[k] || k >= tmp2.size()))
		{
			Arr[i] = tmp1[j];
			j++;
		}
		else
		{
			Arr[i] = tmp2[k];
			k++;
		}
	}
}

void	mergeSort(std::vector<int>& Arr,int start, int end)
{
	int mid;

	if (start < end)
	{
		mid = (end + start) /2; 
		mergeSort(Arr, start, mid);
		mergeSort(Arr, mid + 1, end);
		merge(Arr, start, mid, end);
	}
	return ;
}
int main() {

    
    std::vector<int> Arr = {12, 11, 13, 5, 6, 7};

    std::cout << "Original array: ";
    for (int num : Arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    mergeSort(Arr, 0, Arr.size() - 1);
    std::cout << "Sorted Array: ";
    for (int num : Arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
