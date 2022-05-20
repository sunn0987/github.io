#include <iostream>
using namespace std;
int main()
{
    // to find your target in array element 
    int n, m;
    cout << "Enter a number : \n";
    cin >> n >> m;
    int target;
    cout << "your target = \n";
    cin >> target;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    bool fo = false;
    int r = 0, c = m - 1;
    while (r < n && c >= 0)
    {
        if (a[r][c] == target)
        {
            fo = true;
        }
        if (a[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (fo)
    {
        cout << "Target found ! ";
    }
    else
    {
        cout << "Target doesn't exit ! ";
    }
}