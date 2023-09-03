#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    int i = n / 2;
    for (int j = 2; j <= i; j++)
    {
        if (n % j == 0)
        {
            return false;
        }
    }
    return true;
}

void array_check(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (checkPrime(arr[i]))
        {
            cout << "Found " << arr[i];
            return;
        }
    }
}
int main()
{
    int arr[6] = {1, 4, 6, 8, 9, 7};
    array_check(arr, 6);
    return 0;
}