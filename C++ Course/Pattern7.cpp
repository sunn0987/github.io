#include <iostream>
using namespace std;
int main()
{

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 41; j++)      
        {
            if (i % 2 != 0)
            {
                if ((j >= i) && ((j - i) % 4 == 0))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            if (i % 2 == 0)
            {
                if ((j >= i) && ((j - i) % 2 == 0))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    
    for (int i = 2; i >= 1; i--)
    {
        for (int j = 1; j <= 41; j++)
        {
            if (i % 2 != 0)
            {
                if ((j >= i) && ((j - i) % 4 == 0))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            if (i % 2 == 0)
            {
                if ((j >= i) && ((j - i) % 2 == 0))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    
}

// #include <iostream>
// using namespace std;
// int main()
// {

//      3 3 3 3 3
//      3 2 2 2 3
//      3 2 1 2 3
//      3 2 2 2 3
//      3 3 3 3 3
//     int n;
//     cout << "Enter a number : \n";
//     cin >> n;
//     int len = 2 * n - 1;
//     int p = n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= len; j++)
//         {
//             if (j == i - 1)
//             {
//                 for (int k = 1; k <= i - 1; k++)
//                 {
//                     cout << p-- << " ";
//                 }
//             }
//             if (j >= i && j <= len - i + 1)
//             {
//                 cout << n - i + 1 << " ";
//             }
//             if (j == len - i + 2)
//             {
//                 for (int k = 1; k <= i - 1; k++)
//                 {
//                     cout << ++p << " ";
//                 }
//             }
//         }
//         cout << endl;
//         p = n;
//     }

//     for (int i = n - 1; i >= 1; i--)
//     {
//         for (int j = 1; j <= len; j++)
//         {
//             if (j == i - 1)
//             {
//                 for (int k = 1; k <= i - 1; k++)
//                 {
//                     cout << p-- << " ";
//                 }
//             }
//             if (j >= i && j <= len - i + 1)
//             {
//                 cout << n - i + 1 << " ";
//             }
//             if (j == len - i + 2)
//             {
//                 for (int k = 1; k <= i - 1; k++)
//                 {
//                     cout << ++p << " ";
//                 }
//             }
//         }
//         cout << endl;
//         p = n;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number ";
//     cin >> n;
//     // *             *
//     // * *         * *
//     // *   *     *   *
//     // *     * *     *
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= 2 * n; j++)
//         {
//             if (j >= i + 1 && j <= 2 * n - i)
//             {
//                 cout << "  ";
//             }
//             else if (i >= 3 && i <= n)
//             {
//                 if (j == 1 || j == i || j == 2 * n || (j >= n + 1 && j <= 2*n + 1 - i))
//                 {
//                     cout << "* ";
//                 }
//                 else
//                 {
//                     cout << "  ";
//                 }
//             }
//             else
//             {
//                 cout << "* ";
//             }

//             // else
//             // {
//             //     cout << "* ";
//             // }
//         }
//         cout << endl;
//     }

//     // *     * *     *
//     // *   *     *   *
//     // * *         * *
//     // *             *
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= 2 * n; j++)
//         {
//             if (j >= i + 1 && j <= 2 * n - i)
//             {
//                 cout << "  ";
//             }
//             else if (i >= 3 && i <= n)
//             {
//                 if (j == 1 || j == i || j == 2 * n || (j >= n + 1 && j <= 2*n + 1 - i))
//                 {
//                     cout << "* ";
//                 }
//                 else
//                 {
//                     cout << "  ";
//                     // cout << "* " ;
//                 }
//             }
//             else
//             {
//                 cout << "* ";
//             }

//             // else
//             // {
//             //     cout << "* ";
//             // }
//         }
//         cout << endl;
//     }
// }