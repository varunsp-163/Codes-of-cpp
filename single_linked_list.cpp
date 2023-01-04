#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insert_at_tail(Node *&head, int d)
{
    Node *temp = new Node(d);
    Node *temp1 = head;
    while (temp1 != NULL)
    {
        insert_at_head(temp, head->data);
        temp1 = temp1->next;
    }
    head = temp;
}

int main()
{

    Node *node1 = new Node(10);

    insert_at_tail(node1, 5);

    print(node1);

    insert_at_head(node1, 15);

    cout << endl;

    print(node1);

    return 0;
}