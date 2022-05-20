#include <iostream>
#include <string.h>
using namespace std;
string x ;
string y ;
char d[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
int row;
int column;
char token = 'x';
bool tie;
void functionOne()
{
  

    cout << "\t\t     |     |      \n";
    cout << "\t\t   " << d[0][0] <<  " |   " << d[0][1] << " |   " << d[0][2] << "\n";
	cout << "\t\t_____|_____|_____ \n";
	cout << "\t\t     |     |      \n";
    cout << "\t\t   " << d[1][0] <<  " |   " << d[1][1] << " |   " << d[1][2] << "\n";
	cout << "\t\t_____|_____|_____ \n";
	cout << "\t\t     |     |      \n";
    cout << "\t\t   " << d[2][0] <<  " |   " << d[2][1] << " |   " << d[2][2] << "\n";
	cout << "\t\t     |     |      \n";
}
void functionTwo()
{
    int digit;
    if (token == 'x')
    {
        cout << x << " Please enter : ";
        cin >> digit;
    }
    if (token == '0')
    {
        cout << y << " Please enter : ";
        cin >> digit;
    }
    if (digit == 1)
    {
        row = 0;
        column = 0;
    }
    if (digit == 2)
    {
        row = 0;
        column = 1;
    }
    if (digit == 3)
    {
        row = 0;
        column = 2;
    }
    if (digit == 4)
    {
        row = 1;
        column = 0;
    }
    if (digit == 5)
    {
        row = 1;
        column = 1;
    }
    if (digit == 6)
    {
        row = 1;
        column = 2;
    }
    if (digit == 7)
    {
        row = 2;
        column = 0;
    }
    if (digit == 8)
    {
        row = 2;
        column = 1;
    }
    if (digit == 9)
    {
        row = 2;
        column = 2;
    }
    else if(digit < 1 || digit > 9)
    {
        cout << "Invailed !!!!!! \n";
    }
    if (token == 'x' && d[row][column] != 'x' && d[row][column] != '0')
    {
        d[row][column] = 'x';
        token = '0';
    }
    else if (token == '0' && d[row][column] != 'x' && d[row][column] != '0')
    {
        d[row][column] = '0';
        token = 'x';
    }
    else
    {
        cout << "There is no empty space " << endl;
        functionTwo();
    }

}

bool functionThree()
{
    for (int i = 0; i < 3; i++)
    {
        if (d[i][0] == d[i][1] && d[i][0] == d[i][2] || d[0][i] == d[1][i] && d[0][i] == d[2][i])
        {
            return true;
        }
        
    }
    if (d[0][0] == d[1][1] && d[1][1] == d[2][2] || d[0][2] == d[1][1] && d[1][1] == d[2][0])
    {
        return true;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (d[i][j] != 'x' && d[i][j] != '0')
            {
                return false;
            }
            
        }
        
    }
    tie = true;
    return false;
    
}
int main()
{
    cout << "Enter the name first player : \n";
    getline(cin , x);
    cout << "Enter the name first player : \n";
    getline(cin , y);
    while (!functionThree())
    {
        functionOne();
        functionTwo();
        functionThree();
    }
    if (token == 'x' && tie == false)
    {
        cout << y << "win !!! "<< endl;
    }
    else if (token == '0' && tie == false)
    {
        cout << x << "win !!! " << endl;
    }
    else
    {
        cout << "It's a draw !!! " << endl;
    }
    
}
// 4.... Reverse string using recursion
// #include <iostream>
// #include <string.h>
// using namespace std;
// void Reversestring(string s)
// {
//     if (s.length() == 0)
//     {
//         return;
//     }
//     string ros = s.substr(1);
//     cout << ros << endl;
//     Reversestring(ros);
//     cout << s[0] << "  ";
// }
// int main()
// {
//     string s;
//     cout << "Enter a string : \n";
//     cin >> s;
//     cout << s << endl;
//     Reversestring(s);
// }

// 3...... Problem Number 3
// #include <iostream>
// using namespace std;
// int indexCheck(int arr[], int n, int i, int key)
// {
//     if (i == n)
//     {
//         return -1;
//     }
//     else if (arr[i] == key)
//     {
//         return i;
//     }
//     return indexCheck(arr, n, i + 1, key);
// }
// int main()
// {
//     int arr[] = {4, 2, 3, 5, 2, 4, 2};
//     cout << indexCheck(arr, 7, 0, 2);
// }

// 2...... Problem Number 2
// #include <iostream>
// using namespace std;
// void IncreaseNumber(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     IncreaseNumber(n - 1);
//     cout << n << " ";
// }

// void DecreaseNumber(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     cout << n << " ";
//     DecreaseNumber(n - 1);
// }
// int main()
// {
//     int n;
//     cout << "Enter a number are : \n";
//     cin >> n;
//     // IncreaseNumber(n);
//     DecreaseNumber(n);
// }

// 1.... To check array sorted or not for given array
// #include <iostream>
// using namespace std;
// bool sorted(int arr[], int n)
// {
//     if (n == 1)
//     {
//         return true;
//     }
//     return (sorted(arr + 1, n - 1) && (arr[0] < arr[1]));
// }
// int main()
// {
//     int n;
//     cout << "Enter the length of the array : \n";
//     cin >> n;
//     int arr[n];
//     cout << "Enter element of the array : \n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << sorted(arr, n);
// }