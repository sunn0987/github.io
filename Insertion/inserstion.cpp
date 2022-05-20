// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t, sum, tem = 0;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//            
//             for (int j = 0; j < n; j++)
//             {
//                 if (a[j] > a[i])
//                 {
//                    
//                 }
//                
//                 sum = (a[i] + a[j]) + ((a[i] - a[j]) % m);
//                 cout << sum << endl;
//
//             }
//             // tem = sum;
//             // sum = max(sum, tem);
//         }
//          cout << sum << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int tem;
// void Display(int a[], int n)
// {
//     cout << "Before deleting element in the array : \n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }
// int Delationarray(int a[], int n, int index)
// {
//     tem = a[index];
//     cout << "\nAfter deleting element in the array : \n";
//     for (int i = index; i < n; i++)
//     {
//         a[i] = a[i + 1];
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter a length of the array : \n";
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     Display(a, n);
//     int index;
//     cout << "\nDeletin array element in index : \n";
//     cin >> index;
//     Delationarray(a, n, index);
//     Display(a, n);
//     cout << "Deleting array element is : \n"
//          << tem;
// }

// #include <iostream>
// using namespace std;
// int tem;
// void display(int a[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
// int Delationarray(int a[], int size, int index)
// {
//     tem = a[index];
//     for (int i = index; i < size; i++)
//     {
//         a[i] = a[i + 1];
//     }
// }
// int Inserstionarray(int a[], int size, int index)
// {
//     for (int i = size - 1; i >= index; i--)
//     {
//         a[i + 1] = a[i];
//     }

// }
// int main()
// {
//     int a[23] = {23, 43, 632, 323, 341, 2342};
//     int size = 6;
//     display(a, size);
//     int index = 3;
//     Delationarray(a, size, index);
//     size = 6;
//     display(a, size);
//     cout << "Deleting element are = " << tem << endl;
//     a[5] = 345;
//     display(a, size);
//     Inserstionarray(a, size, index);
//     display(a, size);
// }

// #include <iostream>
// using namespace std;
// void display(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int Deletionarray(int arr[], int size, int index)
// {
//     for (int i = index; i < size; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
// }
// int main()
// {
//     int arr[14] = {22, 34, 55, 21, 67};
//     int size = 5;
//     display(arr, size);
//     int index = 1;
//     Deletionarray(arr, size, index);
//     size--;
//     display(arr, size);
// }




// 1............ Insert element into the array

// #include <iostream>
// using namespace std;
// void displayarray(int arr[], int size)
// {
//     // Traversing element of the array
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int Inserstionarray(int arr[], int size, int index, int element)
// {
//     for (int i = size - 1; i >= index; i--)
//     {
//         arr[i + 1] = arr[i];
//     }
//     arr[index] = element;
// }
// int main()
// {
//     int arr[20] = {1, 20, 4, 2, 43, 434};
//     int size = 6;
//     displayarray(arr, size);
//     int index = 9;
//     int element = 67;
//     Inserstionarray(arr, size, index, element);
//     size++;
//     displayarray(arr, size + 3);
// }
