
#include <iostream>
using namespace std;
struct stud1
{
    int roll;
    int roll2;
} s1,s2, *ptr;
int main()
{
    s1.roll= 9;
    cout << s1.roll;
    *ptr.&roll = 7;

}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m;
//     cout << "Enter a number : \n";
//     cin >> n >> m;
//     int a[n], b[m];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cout << b[i];
//     }
//     int tem;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 tem = a[i];
//                 a[i] = a[j];
//                 a[j] = tem;
//             }
//         }
//     }
//     for (int i = 0; i < n + m; i++)
//     {
//         cout << a[i] << " ";
//     }
    
// }