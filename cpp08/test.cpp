# include <bits/stdc++.h>

using namespace std;

#include <iostream>
#include <vector>
using namespace std;


void reference_iterator(vector<int> my_iterable)
{

    cout << "Value before modification: ";
    for (int my_iterator : my_iterable) {
        cout << my_iterator << " ";
    }

    for (int& my_iterator : my_iterable) {
 
        my_iterator += 1;
    }
 
    cout << "\nValue after modification : ";
    for (int my_iterator : my_iterable) {
        cout << my_iterator << " ";
    }
}
 
// Driver Code
int main()
{
    vector<int> my_iterable;
    my_iterable.push_back(101);
    my_iterable.push_back(102);
    my_iterable.push_back(103);
    my_iterable.push_back(104);
 
    reference_iterator(my_iterable);
 
    return 0;
}