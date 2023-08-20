#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node()
    {
        data = 0;
        next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class stack_as_linked
{
    node *head = NULL;
    int capacity;
    int size;

public:
    stack_as_linked(int capacity)
    {
        this->capacity = capacity;
        size = 0;
    }

    bool isFull()
    {
        return size == capacity;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void push(int n)
    {
        if (isFull())
        {
            cout << "Stack is full. Cannot push." << endl;
            return;
        }

        node *temp = new node(n);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }

        node *temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        // cout << "NULL" << endl;
    }
};

int main()
{
    stack_as_linked s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    s.pop();
    s.pop();

    s.display();
    return 0;
}