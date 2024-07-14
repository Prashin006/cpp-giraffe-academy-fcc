#include <iostream>
#include <string>
using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    string subphrase = phrase.substr(8, 5); // starting from index 8 take 5 characters from string phrase & store it in string subphrase
    phrase[0] = 'B';
    cout << phrase << endl;
    cout << phrase.length() << endl;
    // cout << phrase[8] << endl;
    cout << phrase.find("Academy") << endl; // Find "Academy" after the specified index given as next argument
    cout << subphrase;
    return 0;
}