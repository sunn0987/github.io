#include <iostream>
using namespace std;
int main()
{
//     int n, c, i, j, k;
//     cout << "Enter a number = ";
//     cin >> n;
//     int l = 2 * n - 1;
//     //         0 
//     //       0 1 0 
//     //     0 1 2 1 0
//     //   0 1 2 3 2 1 0
//     // 0 1 2 3 4 3 2 1 0
//     for (i = 1; i <= n; i++)
//     {
//         for (k = 1; k <= n - i; k++)
//         {
//             cout << "  ";
//         }
//         for (j = 0; j < i; j++)
//         {
//             cout << j << " ";
//         }
//         c = j - 1;
//         if (i >= 2 && i <= n)
//         {
//             for (int j = (l / 2 + 2); j <= (l / 2 + i); j++)
//             {
//                 cout << --c << " ";
//             }
//         }

//         cout << endl;
//     }
    
//     // 0 1 2 3 4 3 2 1 0
//     //   0 1 2 3 2 1 0
//     //     0 1 2 1 0
//     //       0 1 0 
//     //         0 
//     for (i = n - 1; i >= 1; i--)
//     {
//         for (k = 1; k <= n - i; k++)
//         {
//             cout << "  ";
//         }
//         for (j = 0; j < i; j++)
//         {
//             cout << j << " ";
//         }
//         c = j - 1;
//         if (i >= 2 && i <= n)
//         {
//             for (int j = (l / 2 + 2); j <= (l / 2 + i); j++)
//             {
//                 cout << --c << " ";
//             }
//         }

//         cout << endl;
//     }

// //     0 1 2 3 4 
// //       0 1 2 3 
// //         0 1 2 
// //           0 1 
// //             0 
// //     for (int i = n; i >= 1; i--)
// //     {
// //         for (int k = 1; k <= n - i; k++)
// //         {
// //             cout << "  ";
// //         }
// //         for (int j = 0; j < i; j++)
// //         {
// //             cout << j << " ";
// //         }
// //         cout << endl;
// //     }
// }