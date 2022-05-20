#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the length of string : \n";
    cin >> n;
    char str[n];
    
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number are : \n";
//     cin >> n;
//     int spf[100] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         spf[i] = i;
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if (spf[i] == i)
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 if (spf[j] == j)
//                 {
//                     spf[j] = i;
//                 }
//             }
//         }
//     }
//     while (n != 1)
//     {
//         cout << spf[n] << " ";
//         n = n / spf[n];
//     }
    
// }

// To check prime factor of any given number
// #include <iostream>
// #include <math.h>
// using namespace std;
// void factorcheck(int i)
// {
//     int flag = 1;
//     for (int j = 2; j <= sqrt(i); j++)
//     {
//         if (i % j == 0)
//         {
//             flag = 0;
//             break;
//         }
//     }
//     if (flag)
//     {
//         cout << i << " ";
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter a number : \n";
//     cin >> n;
//     for (int i = 2; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             factorcheck(i);
//         }
//     }

// }

// // 2............. Prime number between an interval
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the length of the array : ";
//     cin >> n;
//     int prime[n] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         if (prime[i] == 0)
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 prime[j] = 1;
//                 // cout << prime[i] << " ";
//             }
//         }
//         // cout << endl;
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if (prime[i] == 0)
//         {
//             cout << i << " ";
//         }
//     }
// }

//     // 1.............. Decimal to Binary

// #include <iostream>
// using namespace std;
// int main()
// {
//     // int n;
//     // cout << "Enter a number to convert decimal to Binary : \n";
//     // cin >> n;
//     // int x = 1 , ans = 0;
//     // while (x <= n)
//     // {
//     //     x = x * 2;
//     // }
//     // x = x / 2;
//     // while (x > 0)
//     // {
//     //     int lastd = n / x;
//     //     n = n - lastd * x;
//     //     x = x / 2;
//     //     ans = ans * 10 + lastd;
//     // }
//     // cout << "Here is Binrary repersentation of any decimal number : " << ans;
// }