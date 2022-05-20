#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int count = 0, sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            sum += arr[i];
            count++;
            if (sum >= x)
            {
                break;
            }
        }
        int ans;
        ans = n - count;
        cout << ans << endl;
    }
    return 0;
}