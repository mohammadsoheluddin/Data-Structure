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

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

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

void delete_at_index(Node *&head, Node *&tail, int index)
{
    if (index < 0 || head == NULL)
        return;

    if (index == 0)
    {
        Node *temp = head;
        head = head->next;
        if (head == NULL)
            tail = NULL;
        delete temp;
        return;
    }

    Node *current = head;
    for (int i = 0; current != NULL && i < index - 1; ++i)
    {
        current = current->next;
    }

    if (current == NULL || current->next == NULL)
        return;

    Node *next = current->next->next;
    if (current->next == tail)
        tail = current;
    delete current->next;
    current->next = next;
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
    int Q;
    cin >> Q;

    Node *head = NULL;
    Node *tail = NULL;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            insert_head(head, tail, V);
        }
        else if (X == 1)
        {
            insert_tail(head, tail, V);
        }
        else if (X == 2)
        {
            delete_at_index(head, tail, V);
        }

        print_linked_list(head);
    }

    return 0;
}
