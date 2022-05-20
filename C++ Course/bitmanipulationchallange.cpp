
// #include <iostream>
// int main()
// {
//     int n;
//     printf("Enter a number are \n");
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int target;
//     printf("Enter your target : \n");
//     scanf("%d", &target);
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 1; j < n; j++)
//         {
//             int c = a[i] + a[j];
//             if (c == target)
//             {
//                 printf("%d %d", i, j);
//             }
//         }
//     }
// }

// 5....... To find the number of bit 1 in any given number are 
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, count = 0;
//     ;
//     cout << "Enter a number : \n";
//     cin >> n;
//     while (n)
//     {
//         n = (n & (n - 1));
//         // n = n - 1;
//         count++;
//     }
//     cout << "Number of bit 1 is = " << count;
// }

// 4..... To check number is power of 2 or not
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number : \n";
//     cin >> n;
//     if (!(n & (n - 1)))
//     {
//         cout << "Given number is power of two ~~ ";
//     }
//     else
//     {
//         cout << "Given number is not power of two !! ";
//     }
// }

// 3..... To find number of subset of given set
// #include <iostream>
// using namespace std;
// void subset(char arr[4], int n)  // instead of char put int
// {
//     for (int i = 0; i < (1 << n); i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if ((i & (1 << j)))
//             {
//                 cout << arr[j] << " ";
//             }
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter a number : \n";
//     cin >> n;
//     char arr[n]; //  int arr[4] = {1,2,3,4};
//     cout << "Enter element of the array : \n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
    
//     subset(arr, 4);
// }

// 2..... To check number of 1 or 0 in binary repersentation of any number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, count = 0;
//     cout << "Enter a number are = \n";
//     cin >> n;
//     while (n)
//     {
//         n = (n & (n - 1));
//         count++;
//     }
//     cout << count ;
// }

// 1...... To check number is power of 2 or not
// #include <iostream>
// using namespace std;
// int ispowerof2(int n)
// {
//     return (n && !(n & (n - 1)));
// }
// int main()
// {
//     int n;
//     cout << "Input a number are = \n";
//     cin >> n;
//     cout << ispowerof2(n);
// }