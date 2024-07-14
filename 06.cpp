#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    char letter;
    string name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is " << age << endl;

    cout << "Enter your favorite character: ";
    cin >> letter;
    cout << "Your favorite character is " << letter << endl;

    cout << "Enter your name: ";
    // getline(cin, name);
    cin >> name;
    cout << "Your name is " << name << endl;
    return 0;
}