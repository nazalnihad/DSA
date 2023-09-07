#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    cout << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(int arr[], int start, int end, int mid)
{
    int leftSize = mid - start + 1;
    int rightSize = end - mid;

    int left[leftSize];
    int right[rightSize];

    for (int i = 0; i < leftSize; i++)
    {
        left[i] = arr[start + i]; // Corrected
    }
    for (int j = 0; j < rightSize; j++)
    {
        right[j] = arr[mid + 1 + j]; // Corrected
    }

    int k = start;
    int l = 0, r = 0;
    while (l < leftSize && r < rightSize)
    {
        if (left[l] < right[r])
        {
            arr[k] = left[l];
            l++;
        }
        else
        {
            arr[k] = right[r];
            r++;
        }
        k++;
    }

    while (l < leftSize)
    {
        arr[k] = left[l];
        k++;
        l++;
    }

    while (r < rightSize)
    {
        arr[k] = right[r];
        k++;
        r++;
    }
}

void sort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        sort(arr, start, mid);
        sort(arr, mid + 1, end);
        merge(arr, start, end, mid);
    }
}

int main()
{
    int arr[] = {10, 5, 9, 3, 7, 2, 1};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    print(arr, arrSize);

    sort(arr, 0, arrSize - 1);

    cout << "Sorted array: ";
    print(arr, arrSize);

    return 0;
}
