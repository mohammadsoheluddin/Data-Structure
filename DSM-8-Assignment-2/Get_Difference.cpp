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

// void print_linked_list(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
// }

void find_min_max_difference(Node *head)
{
    // if (head == NULL)
    // {
    //     cout << "List is empty" << endl;
    //     return;
    // }

    int minValue = INT_MAX;
    int maxValue = INT_MIN;

    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < minValue)
        {
            minValue = tmp->val;
        }
        if (tmp->val > maxValue)
        {
            maxValue = tmp->val;
        }
        tmp = tmp->next;
    }

    int getDiffVal = maxValue - minValue;
    cout << getDiffVal;
}

// void sort_linked_list(Node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }

//     for (Node *i = head; i->next != NULL; i = i->next)
//     {
//         for (Node *j = i->next; j != NULL; j = j->next)
//         {
//             if (i->val > j->val)
//             {
//                 swap(i->val, j->val);
//             }
//         }
//     }
// }

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

    // sort_linked_list(head);
    find_min_max_difference(head);

    return 0;
}
