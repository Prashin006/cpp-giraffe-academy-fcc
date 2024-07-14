// Pointers
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age = 19;
    string name = "Prashin";
    bool isMale = true;

    int *pAge = &age;
    string *pName = &name;
    bool *pIsMale = &isMale;
    // cout << &age << endl;
    // cout << pAge << endl;
    // cout << pName << endl;
    // cout << pIsMale << endl;

    // cout << *pAge << endl;
    // cout << *pName << endl;
    // cout << *pIsMale << endl;

    cout << &*pAge << endl;
    cout << &*pName << endl;
    cout << &*pIsMale << endl;
    return 0;
}