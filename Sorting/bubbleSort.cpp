#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n)
{
    bool swapped;

    for (int i = 0; i < n; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swapped = true;
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}
int main()
{
    int array[] = {1, 3, 5, 7, 2, 4, 6, 8};
    int length = sizeof(array) / sizeof(int);
    cout << length << "\n";
    bubble_sort(array, length);
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}