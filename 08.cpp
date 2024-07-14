// mad libs game
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string color, noun, celeb;
    cout << "Enter the color: ";
    getline(cin, color);
    cout << "Enter the noun: ";
    getline(cin, noun);
    cout << "Enter the celeb: ";
    getline(cin, celeb);
    // cin >> celeb;

    cout << "Roses are " << color << endl;
    cout << noun << " are blue" << endl;
    cout << "I love " << celeb << endl;
    return 0;
}