#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    string major;
    float cgpa;
    Student(string aName, string aMajor, float aCgpa)
    {
        name = aName;
        major = aMajor;
        cgpa = aCgpa;
    }
    bool hasHonors()
    {
        if (cgpa > 9)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Student s1("Prashin", "Data Science", 8.38);
    Student s2("Pam", "Art", 9.34);
    cout << s1.hasHonors() << endl;
    cout << s2.hasHonors() << endl;
    return 0;
}