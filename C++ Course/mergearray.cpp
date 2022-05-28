#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout << "Enter a number = \n";
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        string str[n];
        cin >> str[n];
        cout << str[3];
        for (int i = 0; i < n + 1; i++)
        {
            if (str[i] != str[n - i - 1])
            {
                c++;
            }
        }
        cout << c;
    }
}
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cout << "Enter a number = \n";
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         int c = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i; j < n; j++)
//             {
//                 for (int k = i; k <= j; k++)
//                 {
//                     if (a[k] == j - i + 1)
//                     {
//                         c++;
//                         break;
//                     }
//                 }
//             }
//         }
//         cout << c << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     float n;
//     cout << "Enter a number to convert Decimal to Binary : \n";
//     cin >> n;
//     int t = 1, p = 0;
//     while (t <= n)
//     {
//         t *= 2;
//     }
//     t /= 2;
//     while (t > 0)
//     {
//         float last = n / t;
//         n = n - (t * last);
//         t /= 2;
//         p = p * 10 + last;
//     }
//     cout << p;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m;
//     cout << "Enter a number : \n";
//     cin >> n >> m;
//     int a[n], b[m];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cout << b[i];
//     }
//     int tem;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 tem = a[i];
//                 a[i] = a[j];
//                 a[j] = tem;
//             }
//         }
//     }
//     for (int i = 0; i < n + m; i++)
//     {
//         cout << a[i] << " ";
//     }

// }