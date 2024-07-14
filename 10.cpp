#include <iostream>
#include <string>
using namespace std;

int getMax(int n1, int n2, int n3)
{
    int result;
    n1 > n2 ? (n1 > n3 ? result = n1 : result = n3) : (n2 > n3 ? result = n2 : result = n3);

    return result;
}
int main()
{
    bool isMale = true;
    bool isTall = false;
    if (isMale && isTall)
    {
        cout << "You are a tall male" << endl;
    }
    else if (isMale && !isTall)
    {
        cout << "You are a short male" << endl;
    }
    else if (!isMale && isTall)
    {
        cout << "You are tall but not male" << endl;
    }
    else
    {
        cout << "You are neither male nor tall" << endl;
    }

    // int num1, num2, num3;
    // cout << "Enter number 1: ";
    // cin >> num1;
    // cout << "Enter number 2: ";
    // cin >> num2;
    // cout << "Enter number 3: ";
    // cin >> num3;
    // cout << getMax(num1, num2, num3) << " is the max number";
    return 0;
}