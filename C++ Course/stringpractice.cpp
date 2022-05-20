#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    // 3.......Function for convert lower case to upper case and upper case to lower case
    string str = "xyzabcdefghijk";
    cout << "String are convert in lower to upper \n";
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;
    cout << "String are convert in upper to lower \n";
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str;

    // 2....... Convert to lowecase to uppercase and upper case to lower case
    // string str = "abcdefxyzghijklmn";
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         str[i] -= 32;
    //     }
    // }
    // cout << str;
    // for (int i = 0; i < 26; i++)
    // {
    //     if (str[i] >= 'A' && str[i] <= 'Z')
    //     {
    //         str[i] += 32;
    //     }
    // }
    // cout << endl << str;

    // 1......typcasting in one to another
    // char s = 'a';
    // cout << s << endl;
    // for (int i = 0; i < 26; i++)
    // {
    //     int t = s - 32;
    //     cout << char(t) << " ";
    //     t++;
    //     s++;
    // }

    return 0;
}