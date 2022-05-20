#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // Armstrong Number are 
    int n;
    cout << "Enter a number = \n";
    cin >> n;
    int t = n;
    int sum = 0, rem;
    while (n)
    {
        rem = n % 10;
        n = n / 10;
        sum += rem*rem*rem;
    }
    
    if (sum == t)
    {
        cout<<"Number is Armstrong !";
    }
    else
    {
        cout<<"Number is not Armstrong !";
    }
    
    
}