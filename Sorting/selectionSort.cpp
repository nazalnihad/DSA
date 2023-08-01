#include <iostream>
using namespace std;

void selection_sort(int arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < length; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }
}
int main()
{
    int array[] = {1, 3, 5, 7, 2, 4, 6, 8};
    int length = sizeof(array) / sizeof(int);
    cout << length << "\n";
    selection_sort(array, length);
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}