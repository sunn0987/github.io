#include <iostream>
// #include <cmath>
using namespace std;
int main()
{
   int a = 10;
   int *p = &a;
   cout << &a << " " << a << endl;
   cout << p << " " << *p;
   cout << endl;
   int **q = &p;
   cout << *q << " " << **q;
   
   return 0;
}