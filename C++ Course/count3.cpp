// There are two types of headers files
// 1. System header files.. It comes with the compiler
#include <iostream>
// 2. User difined header files.. It is written by programmer
// #include "this .h" // This will produce an error if this.h is no present in current directory
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the value of num 1 : \n"; // << is called Insertion operator
    cin >> num1;                             // >> is called Extraction operator
    cout << "Enter the value of num 2 : \n";
    cin >> num2;
    cout << "The sum is = " << num1 + num2 << "\n";
    cout << "The substraction is = " << num1 - num2 << "\n";
    cout << "The Multiple is = " << num1 * num2 << "\n";
    cout << "The Division is = " << num1 / num2 << "\n";
    return 0;
}
