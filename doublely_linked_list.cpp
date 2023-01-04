#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_head(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    temp->prev = temp;
    head = temp;
}

void insert_at_tail(Node *&head, int d)
{
}

int main()
{
    Node *node1 = new Node(10);
    print(node1);

    insert_at_head(node1, 4);
    print(node1);

    return 0;
}