#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    char c,alpha = 'A';
    cout << "Enter a number = ";
    cin >> n;
    int l = 2 * n - 1;
    //       A 
    //     A B A 
    //   A B C B A 
    // A B C D C B A
    // for (i = 1; i <= n; i++)
    // {
    //     for (k = 1; k <= n - i; k++)
    //     {
    //         cout << "  ";
    //     }

    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << alpha++ << " ";
    //     }
    //     c = --alpha;
    //     if (i >= 2 && i <= n)
    //     {
    //         for (j = (l / 2 + 2); j <= (l / 2 + i); j++)
    //         {
    //             cout << --c << " ";
    //         }
    //     }

    //     cout << endl;
    //     alpha = 'A';
    // }
    // A B C D C B A
    //   A B C B A 
    //     A B A 
    //       A 
    // for (i = n; i >= 1; i--)
    // {
    //     for (k = 1; k <= n - i; k++)
    //     {
    //         cout << "  ";
    //     }

    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << alpha++ << " ";
    //     }
    //     c = --alpha;
    //     if (i >= 2 && i <= n)
    //     {
    //         for (j = (l / 2 + 2); j <= (l / 2 + i); j++)
    //         {
    //             cout << --c << " ";
    //         }
    //     }

    //     cout << endl;
    //     alpha = 'A';
    // }
}