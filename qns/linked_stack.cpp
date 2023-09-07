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
        next = nullptr;
    }

    node(int n)
    {
        data = n;
        next = nullptr;
    }
};

class linked_list
{
    node *head = nullptr;
    int size = 0;
    int capacity;

public:
    linked_list(int n)
    {
        capacity = n;
    }

    bool isFull()
    {
        return (size == capacity);
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    void push(int n)
    {
        if (isFull())
        {
            cout << "\nStack Overflow";
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
            cout << "Stack Underflow\n";
            return;
        }
        head = head->next;
        size--;
    }

    void display()
    {
        node *curr = head;
        while (curr != nullptr)
        {
            cout << curr->data << " -> ";
            if (curr->next == nullptr)
            {
                cout << "null";
            }
            curr = curr->next;
        }
    }
};

int main()
{
    linked_list a(5);
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    // a.push(6);
    // a.push(6);

    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();

    a.display();
    return 0;
}
