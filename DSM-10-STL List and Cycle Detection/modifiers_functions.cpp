#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50, 30, 60, 30};
    // list<int> myList2 = {100, 200, 300, 400, 500};
    // vector<int> v = {100, 200, 300, 400, 500};

    // list<int> newList;
    // newList = myList;
    // newList.assign(myList.begin(), myList.end());

    // myList.push_back(200);  // insert at tail
    // myList.push_front(400); // insert at head

    // myList.pop_back();      // delete tail
    // myList.pop_front();     // delete head

    // myList.insert(next(myList.begin(), 5), 100); // insert at position
    // myList.erase(next(myList.begin(), 4)); // delete at position

    // insert multiple value at position
    // myList.insert(next(myList.begin(), 5), {60, 70, 80, 90, 100});

    // insert a list of value at position
    // myList.insert(next(myList.begin(), 5), myList2.begin(), myList2.end());

    // insert an array of value (vector) at position
    // myList.insert(next(myList.begin(), 5), v.begin(), v.end());

    // delete multiple value at position j to k
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 4));

    // replace a certain value which is existing multiple times by a certain value
    // replace(myList.begin(), myList.end(), 30, 300);

    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }

    auto it = find(myList.begin(), myList.end(), 300);
    // cout << *it << endl;
    if (it == myList.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    return 0;
}