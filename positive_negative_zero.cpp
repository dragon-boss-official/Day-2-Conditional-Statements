#include<iostream>
using namespace std;

int main()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if (x > 0)
    {
        cout << "Number is positive";
    }
    else if (x < 0)
    {
        cout << "Number is negative";
    }
    else
    {
        cout << "Number is zero";
    }

    return 0;
}