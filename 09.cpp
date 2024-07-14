#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void hi(string name);
double cube(double num)
{
    // num = num * num * num;
    num = pow(num,3);
    return num;
}
int main()
{
    int lucky[] = {6, 7, 23, 44, 108};
    lucky[5] = 1008;
    cout << lucky[4] << endl;
    cout << lucky[5] << endl;
    int newer[20];
    newer[5] = 55;
    cout << newer[4] << endl; // garbage value
    cout << newer[5] << endl;
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    hi(name);
    // double num;
    // cin >> num;
    // num = cube(num);
    // cout << num << endl;
    return 0;
}
void hi(string name)
{
    if (name == "")
    {
        name = "Mike";
    }
    cout << "Hello, " << name << "!" << endl;
}