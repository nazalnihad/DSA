#include <iostream>
using namespace std;

class ArrayQueue
{
    int front, rear, capacity;
    int *arr;

public:
    ArrayQueue(int capacity)
    {
        this->capacity = capacity;
        front = rear = -1;
        arr = new int[capacity];
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (rear + 1) % capacity == front;
    }

    void enqueue(int data)
    {
        if (isFull())
        {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }

        if (isEmpty())
            front = 0;

        rear = (rear + 1) % capacity;
        arr[rear] = data;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % capacity;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }

        int i = front;
        while (i != rear)
        {
            cout << arr[i] << " ";
            i = (i + 1) % capacity;
        }
        cout << arr[rear] << " ";
    }
};

int main()
{
    ArrayQueue queue(5);
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);

    queue.dequeue();
    queue.dequeue();

    cout << "Queue: ";
    queue.display();

    return 0;
}
