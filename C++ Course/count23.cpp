/*
#include <iostream>
using namespace std;
int main()
{
    int n, cou = 1;
    cout << "Enter the length of the array is = ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (n - cou)
    {
        for (int i = 0; i < n - cou; i++)
        {
            if (a[i] > a[i + 1])
            {
                int tem = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tem;
            }
        }
        cou++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the length of the array = ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Before sorrting array is = \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int tem = a[j];
                a[j] = a[i];
                a[i] = tem;
            }
        }
    }
    cout << "\nAfter the sorrting array\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number is ";
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[j] < a[i])
//             {
//                 int temp = a[j];
//                 a[j] = a[i];
//                 a[i] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }