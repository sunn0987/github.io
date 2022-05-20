#include <iostream>
#include <string>
#include <climits>
#include <math.h>
using namespace std;
// // #include <algorithm>
// // #include <limits>
// // #include <limits.h>
int main()
{
    // 5........************ Decimal to Binary
    int n;
    cout << "Input a decimal number are = \n";
    cin >> n;
    int ans = 0;
    int x = 1;
    while (x <= n)
    {
        x *= 2;
        // cout << x << endl;
    }
    // cout << x << endl;
    x /= 2;
    while (x > 0)
    {
        // cout << x << endl;
        int lastd = n / x;
        n -= lastd * x;
        x /= 2;
        // cout << lastd << " " << x << " " << n << endl;
        ans = ans * 10 + lastd;
    }
        cout << ans << " ";

    // 4........************ Hexadecimal to decimal
    // int n;
    // string str;
    // cout << "Enter string = \n";
    // cin >> str;
    // cout << str << endl;
    // cout << str.size() << endl;
    // int sum = 0, j = 0;
    // for (int i = str.size() - 1; i >= 0; i--)
    // {
    //     if (str[i] >= '0' && str[i] <= '9')
    //     {
    //         sum += pow(16, j++) * (str[i] - '0');
    //     }
    //     else if (str[i] >= 'A' && str[i] <= 'F')
    //     {
    //         sum += pow(16, j++) * (str[i] - 'A' + 10);
    //     }
    // }
    // cout << sum;

    // 3........************ Octal to decimal
    // int n;
    // cout << "Enter a octal number to convert in decimal number = \n";
    // cin>>n;
    // int sum = 0;
    // int i = 0;
    // while (n)
    // {
    //     int c = n % 10;
    //     sum += c * pow(8, i++);
    //     n /= 10;
    // }
    // cout << "The decimal number are = " << sum;

    // 2........************ Binary to decimal
    // int n;
    // cout << "Enter a binary number are = \n";
    // cin>>n;
    // int sum = 0;
    // int i = 0;
    // while (n)
    // {
    //     int c = n % 10;
    //     sum += c * pow(2, i++);
    //     n /= 10;
    // }
    // cout << "The decimal number are = " << endl << sum;

    // 1........************ Pythagorina tropplet
    // int x, y, z;
    // cout << "Enter a number is " << endl;
    // cin >> x >> y >> z;
    // int a = max(x, max(y, z));
    // int b, c;
    // if (a == x)
    // {
    //     b = y;
    //     c = z;
    // }
    // else if (a == y)
    // {
    //     b = z;
    //     c = x;
    // }
    // else
    // {
    //     b = x;
    //     c = y;
    // }
    // if (a * a == b * b + c * c)
    // {
    //     cout << "Pythagorian tripplet !!!!!!";
    // }
    // else
    // {
    //     cout << "is not PYthagorian tripplet _______";
    // }

    //     // cout << max(x,max(y,z)) << endl;
    //     // cout << max(x,z) << endl;
    //     // cout << max(z,y) << endl;
}