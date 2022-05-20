#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 2;
    cout << "Operator in C++" << endl;
    cout << "Followig Operator in C++ is :" << endl;
    cout << "-------------------------------------------------" << endl
         << endl;
    //  1. Arithmetic Operator
    cout << "The value of a + b is : " << a + b << endl;
    cout << "The value of a - b is : " << a - b << endl;
    cout << "The value of a * b is : " << a * b << endl;
    cout << "The value of a / b is : " << a / b << endl;
    cout << "The value of a % b is : " << a % b << endl;
    cout << "The value of a++ is : " << a++ << endl;
    cout << "The value of a-- is : " << a-- << endl;
    cout << "The value of ++a is : " << ++a << endl;
    cout << "The value of --a is : " << --a << endl;
    cout << endl;
    // 2. Assigment Operators  --> used to assin value to variable
    // int a = 9, b = 9;
    // char d = 'e';

    // 3. Comparsion Operators
    cout << "Following are the comparsion operator :: " << endl;
    cout << "-------------------------------------------------" << endl
         << endl;
    cout << "The value of a == b is : " << (a == b) << endl;
    cout << "The value of a != b is : " << (a != b) << endl;
    cout << "The value of a >= b is : " << (a >= b) << endl;
    cout << "The value of a <= b is : " << (a <= b) << endl;
    cout << "The value of a == b is : " << (a == b) << endl;
    cout << "The value of a > b is : " << (a > b) << endl;
    cout << "The value of a < b is : " << (a < b) << endl;

    // 4. Logical Operators
    // 1. and &&
    // 2. or ||
    // 3. not !

    cout << "Following are the Logical operator :: " << endl;
    cout << "-------------------------------------------------" << endl
         << endl;

    cout << "The value of ((a == b) && (a != b)) is : " << ((a == b) && (a != b)) << endl;
    cout << "The value of ((a == b) && (a == b)) is : " << ((a == b) && (a == b)) << endl;
    cout << "The value of ((a == b) || (a == b)) is : " << ((a == b) || (a == b)) << endl;
    cout << "The value of ((a != b) || (a == b)) is : " << ((a != b) || (a == b)) << endl;
    cout << "The value of (!(a != b)) is : " << (!(a != b)) << endl;
    cout << "The value of (!(a == b)) is : " << (!(a == b)) << endl;
}