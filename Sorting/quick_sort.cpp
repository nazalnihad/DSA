#include <iostream>
using namespace std;

int sort(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = sort(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main()
{
    int array[] = {1, 3, 5, 7, 2, 4, 6, 8};
    int length = sizeof(array) / sizeof(int);
    cout << length << "\n";
    quickSort(array, 0, length);
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}