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
//     cout << endl;
// }

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

int find_value(Node *head, int x)
{
    Node *tmp = head;
    int index = 0;
    while (tmp != NULL)
    {
        if (tmp->val == x)
        {
            return index;
        }
        tmp = tmp->next;
        index++;
    }
    return -1; // If the value is not found
}

int main()
{
    int T;
    cin >> T;
    while (T--)
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
        int x;
        cin >> x;

        // sort_linked_list(head);
        // print_linked_list(head);

        int index = find_value(head, x);
        if (index != -1)
        {
            cout << index << endl;
        }
        else
        {
            cout << "-1" << endl;
        }

        // Free the linked list memory
        // while (head != NULL)
        // {
        //     Node *temp = head;
        //     head = head->next;
        //     delete temp;
        // }
    }

    return 0;
}
