#include <iostream>
#include <string>
using namespace std;

class Movie
{
private:
    string rating; // G,PG,PG-13,R,NR
public:
    string title;
    string director;
    Movie(string aTitle, string aDirector, string aRating)
    {
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    }
    void setRating(string aRating)
    {
        if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
        {
            rating = aRating;
        }
        else
        {
            rating = "NR";
        }
    }
    string getRating()
    {
        return rating;
    }
};
int main()
{
    // By setting rating as private we cannot access it from outside the class
    Movie avengers("avengers", "Jim Shergill", "PG-13");
    // avengers.setRating("Dog");
    cout << avengers.getRating();
    return 0;
}