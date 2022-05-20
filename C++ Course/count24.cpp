#include <iostream>
using namespace std;
int main()
{
    int n, j = 1;
    cout << "Enter a number is = ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << endl
         << "Before sorting array is ~~~" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    while (n - j >= 1)
    {
        for (int i = 0; i < n - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                int tem = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tem;
            }
        }
        j++;
    }
    cout << endl
         << "After sorting array is ~~~" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    // int n;
    // cout << "Enter a number is = ";
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // cout << "Before sorrting the array is ~~~ \n";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << "\nAfter sorrting the array is ~~~ \n";
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (a[i] > a[j])
    //         {
    //             int tem = a[j];
    //             a[j] = a[i];
    //             a[i] = tem;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
}