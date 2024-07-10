#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// void fun(int *&p)
void fun(int *p)
{
    // *p = 20;
    // p = NULL;
    // *p = NULL;
    // cout << p << endl;
    cout << "Address of p: " << &p << endl;
}

int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    // cout << val << endl;
    // cout << ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;
    // cout << *ptr << endl;
    return 0;
}