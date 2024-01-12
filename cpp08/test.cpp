# include <bits/stdc++.h>

using namespace std;

#include <iostream>
#include <vector>
#include <stack>



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


int main(void)
{

    std::stack<int> s, s2;
    s.push(2);
    s.push(3);
    s2 = s;
    std::cout << s2.top();
    return (EXIT_SUCCESS);
}