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
        this->next = nullptr;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int get_size(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != nullptr)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void print_middle(Node *head)
{
    int size = get_size(head);
    if (size == 0)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node *tmp = head;
    int middleIndex = size / 2;

    // Move to the middle node
    for (int i = 0; i < middleIndex; i++)
    {
        tmp = tmp->next;
    }

    // Print the middle element(s)
    if (size % 2 == 0)
    { // Even number of elements
        Node *secondMiddle = tmp;
        Node *firstMiddle = head;
        for (int i = 0; i < middleIndex - 1; i++)
        {
            firstMiddle = firstMiddle->next;
        }
        cout << "Middle elements: " << firstMiddle->val << " " << secondMiddle->val << endl;
    }
    else
    { // Odd number of elements
        cout << "Middle element: " << tmp->val << endl;
    }
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    print_linked_list(head);
    print_middle(head);

    return 0;
}
