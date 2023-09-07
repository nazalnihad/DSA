#include <iostream>
using namespace std;
void print_array(int arr[], int size)
{
    cout << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void selection_sort(int arr[], int size)
{
    int min_idx;
    for (int i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            swap(arr[i], arr[min_idx]);
        }
        print_array(arr, size);
    }
}

int main()
{
    int arr[] = {10, 5, 9, 3, 7, 2, 1};
    selection_sort(arr, sizeof(arr) / sizeof(int));
    return 0;
}