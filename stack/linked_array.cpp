#include <iostream>
using namespace std;

class linked_array
{
    int size, top = 0;
    int *arr;

public:
    linked_array(int size)
    {
        this->size = size;
        arr = new int[size];
    }

    bool isEmpty()
    {
        return top == 0;
    }

    bool isFull()
    {
        return top == size;
    }

    void push(int data)
    {
        if (isFull())
        {
            cout << "Stack is full. Cannot push." << endl;
            return;
        }

        arr[top] = data;
        top++;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }

        top--;
    }

    void show()
    {
        for (int i = 0; i < top; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    linked_array l(5);
    l.push(1);
    l.push(2);
    l.push(3);
    l.push(4);

    l.pop();
    l.pop();
    l.show();
    // l.isEmpty();
    return 0;
}
