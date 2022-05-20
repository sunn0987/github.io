#include <iostream>
using namespace std;
int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return a, b;
}
int main()
{
    int a = 3, b = 2;
    swap(a, b);
    cout << a << " " << b;
    // pointer to pointer
    // int a = 20;
    // int *ptr = &a;
    // cout << &a << " " << a << endl;
    // cout << ptr << " " << *ptr << endl;
    // int **ptr1 = &ptr;
    // cout << ptr << " " << *ptr << endl << ptr1 << " " << *ptr1 << " " << **ptr1;

    // int arr[8] = {1,2,3,4,5};
    // int *ptr = arr;
    // cout<<"The address of the element of the array is \n";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *ptr << " " << arr + i << endl;
    //     ptr++;
    // }
}