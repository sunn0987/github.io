// #include <iostream>
// #include <math.h>
// using namespace std;
// int Change_element(int a[], int n)
// {
//     int tem, tem1, c, d;
//     int max1 = a[0];
//     int min1 = a[0];
//     for (int i = 0; i < n; i++)
//     {
//         max1 = max(max1, a[i]);
//         min1 = min(min1, a[i]);
//     }
//     cout << "First Maximum element = \n" << max1 << endl
//          << "First Minimum element = \n" << min1 << endl;
//     int max2 = a[0];
//     int min2 = a[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] != max1)
//         {
//             max2 = max(max2, a[i]);
//         }
//         if (a[i] != min1)
//         {
//             min2 = min(min2, a[i]);
//         }
//     }
//     cout << "Second Maximum element = \n" << max2 << endl
//          << "Second Minimum element = \n" << min2 << endl;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == max2)
//         {
//             c = i;
//         }
//         if (a[i] == min2)
//         {
//             d = i;
//         }
//     }
//     swap(a[c], a[d]);
//     cout << "After Changing largest to smallest : \n\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     swap(max2, min2);
//     cout << "\nSecond Maximum element = \n" << max2 << endl
//          << "Second Minimum element = \n" << min2 << endl;
// }
// int main()
// {
//     int n;
//     cout << "Length of the array is : \n";
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     Change_element(a, n);
// }