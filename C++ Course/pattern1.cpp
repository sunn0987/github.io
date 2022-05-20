#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number = \n";
    cin >> n;
    int c = 2;
    int l = 2 * n - 1;

    //       1 
    //     2 1 2 
    //   3 2 1 2 3 
    // 4 3 2 1 2 3 4
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        if (i >= 2 && i <= n)
        {
            for (int j = (l / 2 + 2); j <= (l / 2 + i); j++)
            {
                cout << c++ << " ";
            }
            c = 2;
        }

        cout << endl;
    }
    // 4 3 2 1 2 3 4
    //   3 2 1 2 3 
    //     2 1 2
    //       1

    for (int i = n - 1; i >= 1; i--)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        if (i >= 2 && i <= n)
        {
            for (int j = (l / 2 + 2); j <= (l / 2 + i); j++)
            {
                cout << c++ << " ";
            }
            c = 2;
        }

        cout << endl;
    }
}