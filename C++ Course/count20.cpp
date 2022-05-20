// 1
// 1 1
// 1 2 1
// 1 3 3 1
// #include <iostream>
// using namespace std;
// int fact1(int num1)
// {
//     int fact2 = 1;
//     for (int i = 1; i <= num1; i++)
//     {
//         fact2 *= i;
//     }
//     return fact2;
// }
// int factorial(int num)
// {
//     for (int i = 0; i < num; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             int c = fact1(i) / (fact1(i - j) * fact1(j));
//             cout << c << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter a number is = ";
//     cin >> n;
//     factorial(n);
// }

// #include <iostream>
// using namespace std;
// int factorial(int num)
// {
//     int fact = 1;
//     for (int i = 1; i <= num; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }
// int main()
// {
//     int n, r;
//     cout << "Enter a number to claculat combination = ";
//     cin >> n >> r;
//     int comb = factorial(n) / (factorial(n - r) * factorial(r));
//     cout << "The combination of = "<< comb;
// }

// #include <iostream>
// using namespace std;
// int factorial(int num)
// {
//     int fact = 1;
//     for (int i = 1; i <= num; i++)  *************To calculate the factorial of number with using function
//     {
//         fact *= i;

//     }
//     cout << "The factorial of number "<< num << " is = " << fact;

// }
// int main()
// {
//     int n;
//     cout << "Enter a number is ";
//     cin>>n;
//     factorial(n);
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int fact = 1;
//     cout << "Enter a number is = "; *****************To calculate factorial number without function
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {

//         fact = fact * i;
//     }
//     cout << "The factorial of number " << n << " = "<< fact;
// }

// #include <iostream>
// using namespace std;
// int t(int num)
// {
//     int t1 = 0, t2 = 1;
//     int nt;
//     for (int i = 1; i <= num; i++) ***************** fibbonaci series using function
//     {
//         nt = t1 + t2;
//         cout << t1 << " ";
//         t1 = t2;
//         t2 = nt;
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter a number = ";
//     cin >> n;
//     t(n);
// }