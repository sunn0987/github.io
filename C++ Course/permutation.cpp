// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
void permute(string a, int l, int r)
{
    // Base case
    if (l == r)
    {
        cout << a << endl;
    }
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l + 1, r);
            cout << "sunny kumar" << endl;
            // backtrack
            swap(a[l], a[i]);
        }
    }
}
int main()
{
    // int a = 679, b = 8, c = 6;
    // cout << a << " " << b << " " << c << endl;
    // swap(a, b);
    // cout << a << " " << b << " " << c;
    string str;
    cout << "Enter a string \n";
    cin >> str;
    int n = str.size();
    cout << "length of the string is " << n << endl;
    cout << "And sting are " << str << endl;
    cout << "Possible arrangment are " << endl;
    permute(str, 0, n - 1);
    return 0;
}
// Driver Code
// int main()
// {
// 	string str = "ABC";
// 	int n = str.size();
// 	permute(str, 0, n-1);
// 	return 0;
// }
