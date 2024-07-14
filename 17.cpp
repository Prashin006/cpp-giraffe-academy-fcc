// Classes & Objects
// A Class is basically a new data type in c++
// An Object is just an instance of a class
// A Constructor is a function that automatically gets called when we create the object
#include <iostream>
#include <string>
using namespace std;

class Book
{
    string title;
    string author;
    int pages;
public:
    Book()
    {
        title = "No Title";
        author = "No Author";
        pages = 0;
    }
    Book(string aTitle, string aAuthor, int aPages)
    {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
    string getTitle(){
        return title;
    }
    string getAuthor(){
        return author;
    }
    int getPages(){
        return pages;
    }
};
int main()
{
    Book book1("Experience of Life!", "Prashin Jignesh Parikh", 163);

    Book book2("Harry Porter", "JK Rowling", 551);
    Book book3;

    cout << book1.getTitle() << book1.getAuthor() << book1.getPages() << endl;
    cout << book2.getTitle() << book2.getAuthor() << book2.getPages() << endl;
    cout << book3.getTitle() << book3.getAuthor() << book3.getPages() << endl;

    return 0;
}