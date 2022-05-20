// #include <iostream>
// using namespace std;
// int main() 
// {
// 	int t, c = 0;
// 	cin >> t;
// 	while(t--)
// 	{
// 	    int N;
// 	    cin >> N;
// 	    int a[N];
// 	    int b[N];		
// 	    for (int i = 1; i <= N; i++) 
// 	    {
// 	        cin >> a[i] >> b[i];
// 	    }
// 	    // for (int j = 1; j <= N; j++) 
// 	    // {
// 	    //     cin >> b[j];
// 	    // }
// 	    for(int i = 1; i <= N; i++)
// 	    {
// 	        for(int j = 1; j <= N; j++)
// 	        {
// 	            if((a[i] == b[j]) && (i < j))
// 	            {
// 	                c++;
// 	            }	            
// 	        }
// 	    }
// 	    cout << c << endl;
// 	}
// 	return 0;
// }


// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, m;
//         cin >> a >> b >> m;
//         cout << min(abs(b - a), abs(m - abs(b - a)));
//         // if (a != b)
//         // {
//         //     if ((m / 2) >= a && (m / 2) >= b)
//         //     {
//         //         cout << abs(b - a) << endl;
//         //     }
//         //     else if ((b - a) >= 50 && (m / 2) >= a && (m / 2) <= b)
//         //     {
//         //         cout << abs(m - b + a) << endl;
//         //     }
//         //     else if ((b - a) >= 50 && (m / 2) <= a && (m / 2) >= b)
//         //     {
//         //         cout << abs(m + b - a) << endl;
//         //     }
//         //     else if ((m / 2) <= a && (m / 2) <= b)
//         //     {
//         //         cout << abs(a - b) << endl;
//         //     }
//         // }
//         // else if(a == b)
//         // {
//         //     cout << a - b << endl;
//         // }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[20];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << a[i] << " ";
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         a[i + 1] = a[i];
//     }

//     cout << endl;
//     a[0] = 897;
//     a[5] = 34;
//     a[6] = 89;
//     for (int i = 0; i < 7; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int t, a, b, c, d, e;
//     cin >> t;
//     while (t--)
//     {
//         int n, x, y;
//         cin >> n >> x >> y;

//         e = n - x + x - 1 + n - y + y - 1;
//         a = min(x - 1, y - 1);
//         b = min(x - 1, n - y);
//         c = min(n - x, y - 1);
//         d = min(n - x, n - y);

//         cout << a + b + c + d + e << "\n";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, count, tem = 0;
//     cout << "Enter a number : \n";
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i <= n - 3; i++)
//     {
//         count = 0;
//         for (int j = i; j < i + 3; j++)
//         {
//             count += a[j];
//         }
//         if (count > tem)
//         {
//             tem = count;
//         }
//     }
//     cout << tem << "  ";
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, column, p = 0;
//     cout << "Enter a row and column = \n";
//     cin >> row >> column;
//     int a[row][column];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             cin >> a[i][j];
//             p += a[i][j];
//             // cout << a[i][j] << " ";
//         }
//     }
//     cout << "Here is your matrix are " << endl;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     cout << "\n\\n--------------------------------\n\n";
//     cout << "Here is your element sum of the array are : ";
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             p += a[i][j];
//         }
//     }
//     cout << p;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number = \n";
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int key;
//     cout << "Enter a key = \n";
//     cin >> key;
//     for (int i = 0; i < n; i++)
//     {
//         if (key == a[i])
//         {
//             for (int j = i; j < n; j++)
//             {
//                 cout << a[j] << " ";
//             }
//             for (int j = 0; j < i; j++)
//             {
//                 cout << a[j] << " ";
//             }

//         }
//     }
// }