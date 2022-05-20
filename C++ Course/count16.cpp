#include <iostream>
using namespace std;
int main()
{
    // To check the largest of four number 
    int a, b, c, d;
    cout << "Enter a number = ";
    cin >> a >> b >> c >> d;
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                cout << a << endl;
            }
            else
            {
                cout << d << endl;
            }
        }
        else
        {
            cout << c << endl;
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            cout << b << endl;
        }
        else
        {
            cout << d << endl;
        }
    }
    else if (c > d)
    {
        cout << c << endl;
    }
    else
    {
        cout << d << endl;
    }
}