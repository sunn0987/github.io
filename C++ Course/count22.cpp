#include <iostream>
using namespace std;

int binary(int a[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()  //// binary search to check number 
{
    int n;
    cout << "Enter a number is = ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    cout << binary(a, n, key) << endl;

    // ********** Hexa decimal to decimal *************
    // int j = 0;
    // string n;
    // cin >> n;
    // int s = n.size(), sum = 0;
    // for (int i = s - 1; i >= 0; i--)
    // {
    //     if (n[i] >= '0' && n[i] <= '9')
    //     {
    //         sum += (n[i] - '0') * pow(16, j++);
    //     }
    //     else if(n[i] >= 'A' && n[i] <= 'F')
    //     {
    //         sum += (n[i] - 'A' + 10) * pow(16, j++);
    //     }
    // }
    // cout << sum ;

    // *****************Octal to Decimal *********
    // int n, i = 0;
    // cout << "Enter a number = ";
    // cin>>n;
    // int sum = 0, c;
    // while (n)
    // {
    //     c = n % 10;
    //     sum += c * pow(8, i++);
    //     n /= 10;
    // }
    // cout << sum;

    // ************** Binary to decimal ******
    // int n, i = 0;
    // cout << "Enter a number is = ";
    // cin >> n;
    // int sum = 0, c;
    // while (n)
    // {
    //     c = n % 10;
    //     sum += c * pow(2, i++);
    //     n /= 10;
    // }
    // cout << sum ;
}