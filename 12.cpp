#include <iostream>
#include <string>
using namespace std;

string int_to_str(int day)
{
    string result;
    switch (day)
    {
    case 0:
        result = "Sunday";
        break;
    case 1:
        result = "Monday";
        break;
    case 2:
        result = "Tuesday";
        break;
    case 3:
        result = "Wednesday";
        break;
    case 4:
        result = "Thursday";
        break;
    case 5:
        result = "Friday";
        break;
    case 6:
        result = "Saturday";
        break;
    default:
        result = "Invalid day";
        break;
    }
    return result;
}
int main()
{
    int day, index = 6;
    // cout << "Enter the day from 0 to 6: ";
    // cin >> day;
    // cout << int_to_str(day) << endl;
    do
    {
        cout << index << endl;
    } while (index <= 5);
    while (index > 0)
    {
        cout << index << endl;
        index--;
    }

    return 0;
}