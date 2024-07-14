#include <iostream>
#include <string>
using namespace std;

int main()
{
    double num1, num2, result = 'ox';
    char op;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter '*' for multiplication,'/' for division,'+' for addition, '-' for subtraction and '%' for modulo division: ";
    cin >> op;
    if (op == '*')
    {
        result = num1 * num2;
    }
    else if (op == '/')
    {
        result = num1 / num2;
    }
    else if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '%')
    {
        result = int(num1) % int(num2);
    }
    else
    {
        cout << "Please enter a valid operator!" << endl;
    }
    if (result != 'ox')
    {
        cout << result << endl;
    }
    return 0;
}