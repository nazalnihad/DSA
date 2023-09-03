#include <iostream>
using namespace std;

int gcd(int num1, int num2, int key)
{
    if (key < 1)
    {
        return 0;
    }
    else if (num1 % key == 0 && num2 % key == 0)
    {
        return key;
    }
    gcd(num1, num2, key - 1);
}

int main()
{
    int n = gcd(13, 17, 13);
    cout << n;

    return 0;
}

// better one

// #include <iostream>
// using namespace std;

// int gcd(int num1, int num2)
// {
//     if (num2 == 0)
//     {
//         return num1;
//     }
//     else
//     {
//         return gcd(num2, num1 % num2);
//     }
// }

// int main()
// {
//     int n = gcd(36, 60);
//     cout << n;

//     return 0;
// }
