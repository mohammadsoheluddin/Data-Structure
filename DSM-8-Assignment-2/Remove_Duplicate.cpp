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

void remove_duplicates(Node *head)
{
    Node *current = head;

    while (current != NULL && current->next != NULL)
    {
        Node *tmp = current;
        while (tmp->next != NULL)
        {
            if (tmp->next->val == current->val)
            {
                Node *duplicate = tmp->next;
                tmp->next = tmp->next->next;
                delete duplicate;
            }
            else
            {
                tmp = tmp->next;
            }
        }
        current = current->next;
    }
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (cin >> val && val != -1)
    {
        insert_tail(head, tail, val);
    }

    remove_duplicates(head);

    print_linked_list(head);

    return 0;
}
