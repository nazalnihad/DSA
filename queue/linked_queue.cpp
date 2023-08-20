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
        this->next = nullptr;
    }
};

class LinkedListQueue
{
    Node *front;
    Node *rear;

public:
    LinkedListQueue()
    {
        front = nullptr;
        rear = nullptr;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }

    void enqueue(int data)
    {
        Node *newNode = new Node(data);
        if (rear == nullptr)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        Node *temp = front;
        front = front->next;
        if (front == nullptr)
        {
            rear = nullptr; // Reset rear when the queue becomes empty
        }
        delete temp;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }

        Node *current = front;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    ~LinkedListQueue()
    {
        while (!isEmpty())
        {
            dequeue();
        }
    }
};

int main()
{
    LinkedListQueue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);

    cout << "Queue contents: ";
    queue.display();

    queue.dequeue();
    queue.dequeue();

    cout << "Queue after dequeue: ";
    queue.display();

    return 0;
}
