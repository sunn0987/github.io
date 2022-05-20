#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number is = " << endl;
    cin >> n;
    int len = 2 * n - 1;
    char alpha = 'a';

    // A B C D E F E D C B A
    // A B C D E   E D C B A
    // A B C D       D C B A
    // A B C           C B A
    // A B               B A
    // A                   A
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= len; j++)
        {
            if (i >= 2 && j >= (n + 2 - i) && j <= (n - 2 + i))
            {
                cout << "  ";
            }
            else
            {
                if (j >= 1 && j <= n + 1 - i)
                {
                    alpha++;
                }
                else if (j >= n + i && j <= len)
                {
                    alpha--;
                }
                // alpha = alpha - 1;
                cout << alpha << " ";
            }
        }
        cout << endl;
        alpha = 'a';
    }


    // A                   A
    // A B               B A
    // A B C           C B A
    // A B C D       D C B A
    // A B C D E   E D C B A
    // A B C D E F E D C B A
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= len; j++)
        {
            if (i >= 2 && j >= (n + 2 - i) && j <= (n - 2 + i))
            {
                cout << "  ";
            }
            else
            {
                if (j >= 1 && j <= n + 1 - i)
                {
                    alpha++;
                }
                else if (j >= n + i && j <= len)
                {
                    alpha--;
                }
                // alpha = alpha - 1;
                cout << alpha << " ";
            }
        }
        cout << endl;
        alpha = 'a';
    }

    // int n;
    // cout << "Enter a number is = \n";
    // cin >> n;
    // int len = 2 * n - 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     int c = 1;
    //     for (int j = 1; j <= len; j++)
    //     {
    //         if (j >= n - i + 1 && j <= n)
    //         {
    //             cout << c++;
    //         }
    //         else if (j <= n - i)
    //         {
    //             cout << " ";
    //         }
    //         if (i >= 2 && j >= n + 1 && j <= (n + i - 1))
    //         {
    //             cout << --c - 1;
    //         }
    //     }
    //     cout << endl;
    // }

    return 0;
}