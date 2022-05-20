#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
int main()
{
    // Multiplication of matrix **********)
    int n, m, c;
    cout << "Enter a row and colomn number : \n";
    cin >> n >> m;
    int a[n][m], b[n][m];
    int pro = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "Matrix entered by user \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Multiplication matrix = \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            pro = 0;
            for (int k = 0; k < m; k++)
            {
                pro += a[i][k] * b[k][j];
            }
            cout << pro << " ";
        }
        cout << endl;
    }
    // cout << "Transpose of matrix is = \n";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << a[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    // int n,m;
    // cout <<"Enter row and colomn number is = \n";
    // cin>>n>>m;
    // int a[n][m];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin>>a[i][j];
    //     }

    // }
    // cout << "Transpose of matrix :: \n";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout <<a[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    // simplw matrix to find any index element in array *********
    // int n, m;
    // cout << "Enter row and column = \n";
    // cin >> n >> m;
    // int a[n][m];
    // cout << "Enter element of the matrix \n";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> a[i][j];
    //     }
    // }
    // cout << "Here is my matrix = \n";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // int l;
    // cout << "find l element in the array : \n";
    // cin >> l;
    // bool flag = false;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (a[i][j] == l)
    //         {
    //             flag = true;
    //             cout << i << " " << j;
    //         }
    //     }
    // }
    // if (flag)
    // {
    //     cout << endl
    //          << "I got my element in array ";
    // }
    // else
    // {
    //     cout << "not found ";
    // }

    // To find maximum and minimun in the array ************
    // int n;
    // // int tem = -199999;
    // // int tem1 = 199999;
    // cout << "Enter a number is = ";
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // int c = a[0], c1 = a[0];
    // for (int i = 0; i < n; i++)
    // {
    //     c = max(c, a[i]);
    //     c1 = min(c1, a[i]);
    // }
    // cout << "Maximum = " << c << endl
    //      << "Minimum = " << c1;
}