#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter a number = ";
    cin >> n;
    //     1
    //    1 2
    //   1 2 3
    //  1 2 3 4
    // 1 2 3 4 5
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int k = i; k <= n; k++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // int l = 2 * n - 1;
    //       * * * *
    //     * * * *
    //   * * * *
    // * * * *
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= l; j++)
    //     {
    //         if (j >= (l / 2 + 2 - i) && j <= (l + 1 - i))
    //         {
    //             cout << "*"
    //                  << " ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    // * * * *
    //   * * * *
    //     * * * *
    //       * * * *
    // for (int i = n - 1; i >= 1; i--)
    // {
    //     for (int j = 1; j <= l; j++)
    //     {
    //         if (j >= (l / 2 + 2 - i) && j <= (l + 1 - i))
    //         {
    //             cout << "*"
    //                  << " ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //         {
    //             cout << "1"
    //                  << " ";
    //         }
    //         else
    //         {
    //             cout << "0"
    //                  << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i == 1 && j == 1) || (i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
    //         {
    //             cout << "1"
    //                  << " ";
    //         }
    //         else
    //         {
    //             cout << "0"
    //                  << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // 1 0 1 0 1
    // 0 1 0 1
    // 1 0 1
    // 0 1
    // 1
    // for (int i = n - 1; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i == 1 && j == 1) || (i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
    //         {
    //             cout << "1"
    //                  << " ";
    //         }
    //         else
    //         {
    //             cout << "0"
    //                  << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
}