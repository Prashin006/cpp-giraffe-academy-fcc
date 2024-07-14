// Building an exponent function in c++
#include <iostream>
#include <string>
using namespace std;
double exponent(double number, double exp)
{
    double result = 1;
    if (exp > 0)
    {
        for (int i = 1; i <= exp; i++)
        {
            result = result * number;
        }
    }
    else if (exp < 0)
    {
        for (int i = exp; i < 0; i++)
        {
            result = result / number;
        }
    }

    return result;
}
int main()
{
    double num, exp;
    cout << "Enter the number and exponent: ";
    cin >> num >> exp;
    // cout << num << "^" << exp;
    cout << num << "^" << exp << " = " << exponent(num, exp) << endl;
    return 0;
}