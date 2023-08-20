#include <iostream>
using namespace std;

int binary(int arr[], int start, int end)
{
    int key = 0;
    int mid = (start + end) / 2;

    if (start > end)
    {
        return 0;
    }

    if (arr[mid] > key && (mid == end || arr[mid + 1] < key))
    {
        return mid + 1;
    }
    else if (arr[mid] > key && arr[mid + 1] > key)
    {
        binary(arr, mid + 1, end);
    }
    else
    {
        binary(arr, start, mid - 1);
    }
}
int main()
{
    int arr[] = {1, -1, -2, -3, -4, -5};
    int length = sizeof(arr) / sizeof(int);
    int x = binary(arr, 0, length - 1);

    cout << "number of positives = " << x << "\n";

    return 0;
}