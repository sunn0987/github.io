#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number \n";
	cin >> n;
	int len = 2 * n - 1;
	for (int i = 0; i < n; i++)
	{
		for (int k = i; k < n; k++)
		{
			cout << " ";
		}
		
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
	for (int i = 2; i < n; i++)
	{
		for (int k = i; k < n; k++)
		{
			cout << " ";
		}
		
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
	for (int i = 4; i < n; i++)
	{
		for (int k = i; k < n; k++)
		{
			cout << " ";
		}
		
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
	for (int i = 0; i < n; i++)
	{
		for (int k = 1; k <= 6; k++)
		{
			cout << " ";
		}
		
		for (int j = 1; j < 8; j++)
		{
			cout << "| ";
		}
		cout << "\n";
	}
	
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number = \n";
//     cin >> n;
//     int len = 2 * n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= len; j++)
//         {
//             if (i == n && j <= n)
//             {
//                 cout << "* ";
//             }

//             if (j >= n + 1 && j <= n + i)
//             {
//                 cout << "* ";
//             }
//             else if (i != n)
//             {
//                 cout << "  ";
//             }
//         }
//         cout << "\n";
//     }

//     for (int i = n - 1; i >= 1; i--)
//     {
//         for (int j = 1; j <= len; j++)
//         {
//             if (j >= n + 1 && j <= n + i)
//             {
//                 cout << "* ";
//             }
//             else if (i != n)
//             {
//                 cout << "  ";
//             }
//         }
//         cout << "\n";
//     }
// }

// #include <iostream>
// int main()
// {
//     int n;
//     cout << "Enter a number = \n";
//     cin >> n;
//     int len = 2 * n - 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= len; j++)
//         {
//             if (j >= n - i + 1 && j <= len - i + 1)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }

//     for (int i = n - 1; i >= 1; i--)
//     {
//         for (int j = 1; j <= len; j++)
//         {
//             if (j >= n - i + 1 && j <= len - i + 1)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, tem;
//     cout << "Input a number = \n";
//     cin >> n;
//     int a[n];
//     cout << "Enter array element : \n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (a[i] < a[i + 1])
//         {
//             tem = a[i + 1];
//         }
//     }
//     cout << "First Largest = " << tem;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number = \n";
//     cin >> n;
//     int a[n];
//     cout << "Enter element array = \n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int a = 9;
// 	int *b = &a;
// 	cout << b << endl;
// 	cout << &a << endl;
// 	cout << a << endl;
// 	cout << *b << endl;
// 	int **c = &b;
// 	cout << &b << endl;
// 	cout << c << endl;
// 	cout << *c << endl;
// 	cout << **c << endl;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// // #include <string.h>
// using namespace std;
// int main()
// {
// 	string str = "abc";
// 	char temp;
// 	for (int i = 0; i < str.size(); i++)
// 	{
// 		str = "abc";
// 		swap(str[0], str[i]);
// 		for (int j = 0; j < str.size() - 1; j++)
// 		{
// 			swap(str[1], str[j + 1]);
// 			cout << str << endl;
// 		}
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;
// // Function to print permutations of string
// // This function takes three parameters:
// // 1. String
// // 2. Starting index of the string
// // 3. Ending index of the string.
// void permute(string a, int l, int r)
// {
// 	// Base case
// 	if (l == r)
// 		cout<<a<<endl;
// 	else
// 	{
// 		// Permutations made
// 		for (int i = l; i <= r; i++)
// 		{

// 			// Swapping done
// 			swap(a[l], a[i]);

// 			// Recursion called
// 			permute(a, l+1, r);

// 			//backtrack
// 			swap(a[l], a[i]);
// 		}
// 	}
// }

// // Driver Code
// int main()
// {
// 	string str = "AAB";
// 	int n = str.size();
// 	permute(str, 0, n-1);
// 	return 0;
// }
