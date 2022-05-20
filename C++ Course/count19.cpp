#include <iostream>
#include <math.h>
using namespace std;

// ******************To check prime or not between two number 

bool prime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cout << "Enter a number is = ";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (prime(i))
        {
            cout << i << " ";
        }
    }

    // int n, p, c;
    // cout << "Enter a decimal number is = " << endl;
    // cin >> n;
    // cout << pow(n,3);
    // cout << "Binary number !~ " << endl;
    // while (n)
    // {
    //     // p = n % 2;
    //     // n = n / 2;
    //     // cout<< p << " ";
    //     p = n % 10;
    //     n = n / 10;
    //     c = pow(p, 2);
    //     cout << c << " ";
    // }
}