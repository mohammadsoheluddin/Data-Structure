#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50, 60};
    cout << myList.front() << endl;           // Access the value of head
    cout << myList.back() << endl;            // Access the value of tail
    cout << *next(myList.begin(), 3) << endl; // Access specified position's value
    return 0;
}