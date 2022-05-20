#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // ******************** constant keyword*****************
    // int a = 4777;
    // cout << "The value of a was : " << a << endl;
    // a = 899;
    // cout << "The value of a is : " << a << endl;

    // const int b = 890;
    // cout << "The value of b is : " << b << endl;
    // //b = 90;
    // cout << "The value of b is : " << b << endl;

    //******************** Manipulation in C++****************

    // int a = 8, b = 99, c = 7999;
    // cout << "The value of a is : " << a << endl;
    // cout << "The value of b is : " << b << endl;
    // cout << "The value of c is : " << c << endl;

    // cout << "The value of a is : " <<setw(3)<<a<<endl;
    // cout << "The value of b is : " <<setw(4)<<b<<endl;
    // cout << "The value of c is : " <<setw(5)<<c<<endl;

    // **************** Operator Precedence************
    int a = 9, b = 3;
    int c;
    c = a * b + b - 34 + 12 - 34 + a;
    cout << "The value of c is ::: " << c;
    return 0;
}