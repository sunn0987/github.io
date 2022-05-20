#include <iostream>
using namespace std;
int main()
{
    int n, i = 0;
    cout << "Enter a number :" << endl;
    cin >> n;
    int sum;
    sum = 0;
    //****************for loop**********
    // for (int i = 0; i < n; i++)
    // {
    //     sum += i;
    // }
    //**************while loop********
    // while (i < n)
    // {
    //     sum += i;
    //     i++;
    // }
    do
    {
        sum += i;
        i++;
    } while (i < n);

    cout << "The sum is :: " << sum;
    return 0;
}