#include <iostream>
using namespace std;
int main()
{
    // Multiplication of the matrix ********
    int n, m, pro = 0;
    cout << "Enter a row and column number ~ \n";
    cin >> n >> m;
    int a[n][m], b[n][m];
    cout << "Enter element of 1 array ~ " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter element of 2 array ~ " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "Matrix of " << n << "*" << m << " matrix " << endl;
    cout << "1 Matrix = \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "2 Matrix = \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
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
}