
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int main() {

    srand(time(0));

    char choice;

    do {
        int difficulty;
        int maxNumber;

        cout << "\033[1;36m";
cout << "====================================" << endl;
cout << "       NUMBER GUESSING GAME" << endl;
cout << "====================================" << endl;
cout << "\033[0m";

cout << "\033[1;33m";
cout << "\n       Choose Your Difficulty\n" << endl;
cout << "\033[0m";

cout << "\033[1;32m";
cout << "       [1] Easy" << endl;
cout << "\033[0m";

cout << "\033[1;34m";
cout << "       [2] Medium" << endl;
cout << "\033[0m";

cout << "\033[1;31m";
cout << "       [3] Hard" << endl;
cout << "\033[0m";

cout << "====================================" << endl;
cout << "Enter choice: ";

        while (!(cin >> difficulty) || difficulty < 1 || difficulty > 3) {
            cout << "Invalid choice! Enter 1, 2, or 3: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (difficulty == 1) {
            maxNumber = 50;
        }
        else if (difficulty == 2) {
            maxNumber = 100;
        }
        else {
            maxNumber = 200;
        }

        cout << "\nYou selected: ";
        if (difficulty == 1) cout << "Easy" << endl;
        else if (difficulty == 2) cout << "Medium" << endl;
        else cout << "Hard" << endl;

        cout << "Guess a number between 1 and "
             << maxNumber << endl;

        int secretNumber = rand() % maxNumber + 1;
        int guess;
        int attempts = 0;

        while (true) {
            cout << "\nEnter your guess: ";

            while (!(cin >> guess) || guess < 1 || guess > maxNumber) {
                cout << "Invalid input! Enter a number between 1 and "
                     << maxNumber << ": ";

                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            attempts++;

            if (guess == secretNumber) {
                cout << "\nCorrect! You guessed it!" << endl;
                break;
            }
            else if (guess > secretNumber) {
                cout << "Too high! Try again." << endl;
            }
            else {
                cout << "Too low! Try again." << endl;
            }
        }

        cout << "\nYou guessed it in " << attempts
             << " attempts!" << endl;

        if (difficulty == 1) {
            cout << "Your score: " << 100 / attempts << " points!" << endl;
        }
        else if (difficulty == 2) {
            cout << "Your score: " << 200 / attempts << " points!" << endl;
        }
        else {
            cout << "Your score: " << 300 / attempts << " points!" << endl;
        }

        cout << "\nDo you want to play again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThanks for playing!" << endl;

    return 0;
}
