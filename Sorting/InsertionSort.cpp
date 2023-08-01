#include <iostream>
using namespace std;

void insertion_sort(int array[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

int main()
{
    int array[] = {1, 3, 5, 7, 2, 4, 6, 8};
    int length = sizeof(array) / sizeof(int);
    cout << length << "\n";
    insertion_sort(array, length);
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}