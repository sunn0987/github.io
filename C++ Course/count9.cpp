#include <iostream>
using namespace std;
int main()
{
    // USING NESTED IF ELSE FIND MAXIMUM OF THREE NUMBER
    int a, b, c;
    cout << "Enter a integer :: \n";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "The largest Number is :: " << a << endl;
        }
        else
        {
            cout << "The largest Number is :: " << c << endl;
        }
    }
    else
    {
        if (b > a)
        {
            if (b > c)
            {
                cout << "The largest Number is :: " << b << endl;
            }
            else
            {
                cout << "The largest Number is :: " << c << endl;
            }
        }
    }
}