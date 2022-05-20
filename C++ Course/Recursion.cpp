#include <iostream>
using namespace std;
// int sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n + sum(n - 1);
// }

// int power(int n, int p)
// {
//     if (p == 0)
//     {
//         return 1;
//     }
//     return n * power(n, p - 1);
// }

// int factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }

int fibbonaci(int n)
{
    if (n == 0)
    {
        return n;
    }
    else if (n == 1)
    {
        return n;
    }
    int fibbo = fibbonaci(n - 1) + fibbonaci(n - 2);
    return fibbo;
    cout << fibbo << " ";
    // return fibbonaci(n - 1) + fibbonaci(n - 2);
}
int main()
{
    int n;
    cout << "Enter a number = \n";
    cin >> n;
    // cout << sum(n);
    // cout << power(n, p);
    // cout << factorial(n);
    cout << fibbonaci(n);
}