#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Largest_Three(int a[], int n)
{
    int tem, tem1, tem2;
    tem = tem1 = tem2 = INT_MIN;
    
    for (int i = 0; i < n; i++)
    {
        tem = max(tem, a[i]);
    }
    cout << tem << " ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] != tem)
        {
            tem1 = max(tem1, a[i]);
        }
    }
    cout << tem1 << " ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] != tem1 && a[i] != tem)
        {
            tem2 = max(tem2, a[i]);
        }
    }
    cout << tem2 << " ";
}
int main()
{
    int n;
    cout << "Enter Length of the array = \n";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Largest_Three(a, n);
}