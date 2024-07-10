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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
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
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_middle(Node *head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // If fast is NULL, the list has an odd number of elements
    // If fast is not NULL and fast->next is NULL, the list has an even number of elements
    if (fast != NULL)
    { // Odd number of elements
        cout << "Middle element: " << slow->val << endl;
    }
    else
    { // Even number of elements
        Node *second_middle = head;
        while (second_middle->next != slow)
        {
            second_middle = second_middle->next;
        }
        cout << "Middle elements: " << second_middle->val << " " << slow->val << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
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
