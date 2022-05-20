#include <iostream>

using namespace std;
int main()
{
    //*********** control if else statement*************

    // int age;
    // cout << "Enter your age :: " << endl;
    // cin >> age;
    // if (age < 18 && age > 0)
    // {
    //     cout << "you are not allowed in party:" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "you can go to the children party " << endl;
    // }
    // else if (age < 0)
    // {
    //     cout << "you are not born yet " << endl;
    // }

    // else
    // {
    //     cout << "you can come to the party " << endl;
    // }

    int age;
    cout << "Tell me your age ::" << endl;
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "you are 18" << endl;
        break;
    case 34:
        cout << "you are adult" << endl;
        break;
    case 5:
        cout << "you are teenager" << endl;
        break;
    default:
        cout << "No special case ";
    }
}