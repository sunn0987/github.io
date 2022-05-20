#include <iostream>
using namespace std;
int main()
{

    int n, a = 1;
    cout << "Enter rows and column = " << endl;
    cin >> n;
    // *             *
    // * *         * *
    // * * *     * * *
    // * * * * * * * *
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= 2 * n; j++)
    //     {
    //         if (j >= i + 1 && j <= 2 * (n - i) + i)
    //         {
    //             cout << "  ";
    //         }
    //         else
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }

    // * * * * * * * *
    // * * *     * * *
    // * *         * *
    // *             *
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= 2 * n; j++)
    //     {
    //         if (j >= i + 1 && j <= 2 * (n - i) + i)
    //         {
    //             cout << "  ";
    //         }
    //         else
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }

    // 1
    // 2 3
    // 4 5 6
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << a++ << " ";
    //     }
    //     cout << endl;
    // }

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    //       *
    //     * *
    //   * * *
    // * * * *
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int k = 1; k <= n - i; k++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout<<" *";
    //     }
    //     cout<<endl;

    // }

    // * * * *
    // * * *
    // * *
    // *
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << "* ";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <=n; j++)
    //     {

    //         if (i == 1 || i == n || j == 1 || j == n || i == n/2 || j ==n/2 )
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
}