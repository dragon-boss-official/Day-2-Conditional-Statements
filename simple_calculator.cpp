#include<iostream>
using namespace std;

int main()
{
    int number, x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "\nChoose an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: ";
    cin >> number;

    switch(number)
    {
        case 1:
            cout << "Sum = " << x + y;
            break;

        case 2:
            cout << "Difference = " << x - y;
            break;

        case 3:
            cout << "Product = " << x * y;
            break;

        case 4:
            if (y != 0)
                cout << "Division = " << x / y;
            else
                cout << "Division by zero is not possible.";
            break;

        default:
            cout << "Invalid input!";
    }

    return 0;
}