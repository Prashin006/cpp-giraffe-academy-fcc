// Number guessing game
#include <iostream>
#include <string>
#include <random>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0)); // to randomize the variable secret everytime we run our program
    int guess, guessCount = 0, guessLimit = 3, secret = rand() % 10 + 1;
    bool outOfGuesses = false;
    // int arr[] = {43, 44, 47, 56, 89, 97, 100};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    while (guess != secret)
    {
        if (guessCount < guessLimit)
        {
            cout << "Enter the no between 1 to 10: ";
            cin >> guess;
            guessCount++;
        }
        else
        {
            outOfGuesses = true;
            break;
        }
    }
    // if (outOfGuesses == true)
    // {
    //     cout << "You lose!" << endl;
    // }
    // else
    // {
    //     cout << "You win!" << endl;
    // }
    outOfGuesses ? cout << "You lose! " << secret << endl : cout << "You win!" << endl;
    return 0;
}