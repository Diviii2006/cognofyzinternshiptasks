#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  // Seed for random number generator
    int numberToGuess = rand() % 100 + 1;  // Random number between 1 and 100
    int guess, attempts = 0;

    cout << "Guess the number (between 1 and 100): ";

    do {
        cin >> guess;
        attempts++;

        if (guess > numberToGuess)
            cout << "Too high! Try again: ";
        else if (guess < numberToGuess)
            cout << "Too low! Try again: ";
        else
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.";
    } while (guess != numberToGuess);

    return 0;
}

