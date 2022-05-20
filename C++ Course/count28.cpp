#include <iostream>
using namespace std;
int main()
{
    // To check plaindrome 
    // ex = nitin is plaindrome
    // ex = mohit is not plaindrome 
    int n;
    cout << "Length of the array is ";
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    bool ch = 1;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] == arr[n - 1 - i])
        {
            continue;
        }
        else
        {
            ch = 0;
            break;
        }
    }
    if (ch)
    {
        cout << "is plaindrome ";
    }
    else
    {
        cout << "is not plaindrome ";
    }
}